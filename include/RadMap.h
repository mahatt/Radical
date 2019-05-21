#ifndef _RAD_MAP_H_
#define _RAD_MAP_H_

#include <map>
namespace radical{


/* RadMap
 * 1. No Copy for Map object
 * 2. Do this with Functor 
 * 3. Less iteration
 * 4. Hide map methods
 */


template <typename tKeyType, 
          typename tValueType, 
          typename tComparator = std::less<KeyType> >
class RadMap{
public:
	typedef tKeyType             KeyType;
	typedef tValueType           ValueType;
	typedef tComparator          ComparatorType;

private:
	std::map<KeyType,ValueType,ComparatorType> mMap;

public:
	~RadMap(){}
	RadMap(const RadMap&)  = delete;
	RadMap(RadMap&&)       = delete;
	RadMap& operator=(const RadMap&) = delete; // copy assignment
	RadMap& operator=(RadMap&&)      = default; // Move assignment

	iterator begin();
	iterator end();
	const_iterator cbegin() const;
	const_iterator cend() const;

	size_t size() const;
	ValueType at(const KeyType& key) const;

    template<typename... _Args>
	std::pair<iterator, bool> emplace(_Args&&... __args)	

	bool contains(const KeyType& key) const;


	/*Rad stuff*/
	void insertIfAbsent(KeyType& key,ValueType& value);

	void findAndErase(KeyType& key);
	
	template <typename MapDoFunctor>
	void findAndDo(KeyType& key, MapDoFunctor doThis);
	
	template <typename MapDoFunctor>
	void iterateAndDo(KeyType& key, MapDoFunctor doThis);

	ValueType& getOrInsert(KeyType& key,ValueType& value);

	ValueType& getAndErase(KeyType& key,ValueType& value);
};


} // end of nm radical
#endif
