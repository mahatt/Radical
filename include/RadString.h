#ifndef _RAD_STRING_H_
#define _RAD_STRING_H_
#include <string>
namespace radical{


/* Case insensitive string Operations
 */
class istring  : public std::string{
	public:
	typedef typename  std::string::value_type value_type;
		istring() : std::string(){}
		~istring(){
			using namespace std;
			this->string::~string();
		}
		istring(const char * inCStyle) : std::string(inCStyle) {}
		istring(std::string& inString) :  std::string(inString){}
  
		istring
		operator=(const istring& inString){
			std::copy(inString.begin(),inString.end(),this->begin());
		}
		istring
		operator=(const char*    inCStyle){
			this->insert(0,inCStyle);
		}

		istring
		operator=(const char     inChar){
			this->insert(0,1,inChar);
			this->insert(1,1,'\0');
		}
/*
		istring
		operator=(istring&& 	 inString);
		const_reference 
		operator[](size_type inPos) const;
		reference 
		operator[](size_type inPos);
		istring
		operator+=(const istring& inString);
		istring
		operator+=(const char*    inCStyle);
		istring
		operator+=(const char     inChar);
		istring
		operator+=(istring&& 	 inString);
*/

};


inline bool
operator==(const istring& inLHS, const istring& inRHS){
	return std::equal(inLHS.begin(),inLHS.end(),
			          inRHS.begin(),inRHS.end(),
					  [](istring::value_type first,istring::value_type second){
					 	 return  ::tolower(first) ==  tolower(second);
					  });	
}

inline bool
operator!=(const istring& inLHS, const istring& inRHS){
	return std::equal(inLHS.begin(),inLHS.end(),
			          inRHS.begin(),inRHS.end(),
					  [](istring::value_type first,istring::value_type second){
					 	 return  ::tolower(first) !=  tolower(second);
					  });	
}

/*
inline bool
operator<=(const istring& inLHS, const istring& inRHS);
inline bool
operator<(const istring& inLHS, const istring& inRHS);
inline bool
operator>=(const istring& inLHS, const istring& inRHS);
inline bool
operator>(const istring& inLHS, const istring& inRHS);

inline bool
operator==(const istring& inLHS, const string& inRHS);
inline bool
operator!=(const istring& inLHS, const string& inRHS);
inline bool
operator<=(const istring& inLHS, const string& inRHS);
inline bool
operator<(const istring& inLHS, const string& inRHS);
inline bool
operator>=(const istring& inLHS, const string& inRHS);
inline bool
operator>(const istring& inLHS, const string& inRHS);

inline bool
operator==(const string& inLHS, const istring& inRHS);
inline bool
operator!=(const string& inLHS, const istring& inRHS);
inline bool
operator<=(const string& inLHS, const istring& inRHS);
inline bool
operator<(const string& inLHS, const istring& inRHS);
inline bool
operator>=(const string& inLHS, const istring& inRHS);
inline bool
operator>(const string& inLHS, const istring& inRHS);


inline bool
operator==(const istring& inLHS, const char * inRHS);
inline bool
operator!=(const istring& inLHS, const char * inRHS);
inline bool
operator<=(const istring& inLHS, const char * inRHS);
inline bool
operator<(const istring& inLHS, const char * inRHS);
inline bool
operator>=(const istring& inLHS, const char * inRHS);
inline bool
operator>(const istring& inLHS, const char * inRHS);


inline bool
operator==(const char * inLHS, const istring& inRHS);
inline bool
operator!=(const char * inLHS, const istring& inRHS);
inline bool
operator<=(const char * inLHS, const istring& inRHS);
inline bool
operator<(const char * inLHS, const istring& inRHS);
inline bool
operator>=(const char * inLHS, const istring& inRHS);
inline bool
operator>(const char * inLHS, const istring& inRHS);

*/

//TODO:
// Need StringRef naming over string_view
}

#endif
