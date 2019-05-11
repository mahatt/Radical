#ifndef _RAD_STRING_H_
#define _RAD_STRING_H_

namespace radical{

/* Case insensitive string Operations
 */
class istring  : std::string{
	public:
		istring
		operator=(const istring& inString);
		istring
		operator=(const char*    inCStyle);
		istring
		operator=(const char     inChar);
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

};


inline bool
operator==(const istring& inLHS, const istring& inRHS);
inline bool
operator!=(const istring& inLHS, const istring& inRHS);
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



//TODO:
// Need StringRef naming over string_view
}

#endif