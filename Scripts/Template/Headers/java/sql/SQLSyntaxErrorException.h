//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLSyntaxErrorException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLSyntaxErrorException")
#ifdef RESTRICT_JavaSqlSQLSyntaxErrorException
#define INCLUDE_ALL_JavaSqlSQLSyntaxErrorException 0
#else
#define INCLUDE_ALL_JavaSqlSQLSyntaxErrorException 1
#endif
#undef RESTRICT_JavaSqlSQLSyntaxErrorException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLSyntaxErrorException_) && (INCLUDE_ALL_JavaSqlSQLSyntaxErrorException || defined(INCLUDE_JavaSqlSQLSyntaxErrorException))
#define JavaSqlSQLSyntaxErrorException_

#define RESTRICT_JavaSqlSQLNonTransientException 1
#define INCLUDE_JavaSqlSQLNonTransientException 1
#include "../../java/sql/SQLNonTransientException.h"

@interface JavaSqlSQLSyntaxErrorException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 null, the SQLState string is set to null and the Error Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to null and the Error
 Code is set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the Error Code is set to the given error code value.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string , the Error Code is set to the given error code value, and the
 cause Throwable object is set to the given cause Throwable object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given reason string, the SQLState string is set to the given SQLState
 string and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the given and the cause Throwable object is set to the given cause
 Throwable object.
 @param reason
 the string to use as the Reason string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLSyntaxErrorException object.
 The Reason string is set to
 the null if cause == null or cause.toString() if cause!=null,and the
 cause Throwable object is set to the given cause Throwable object.
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLSyntaxErrorException)

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_init(JavaSqlSQLSyntaxErrorException *self);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_init();

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_(JavaSqlSQLSyntaxErrorException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSException_(JavaSqlSQLSyntaxErrorException *self, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSException_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSException_(NSString *reason, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSException_(NSString *reason, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withNSException_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_withNSException_(JavaSqlSQLSyntaxErrorException *self, NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *new_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLSyntaxErrorException *create_JavaSqlSQLSyntaxErrorException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLSyntaxErrorException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLSyntaxErrorException")
