#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.8 (swiftlang-5.8.0.124.2 clang-1403.0.22.11.100)
#ifndef SIGNEDCALLSDK_SWIFT_H
#define SIGNEDCALLSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CTSimplePing;
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="SignedCallSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)


SWIFT_CLASS("_TtC13SignedCallSDK8Platform")
@interface Platform : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL isSimulator;)
+ (BOOL)isSimulator SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
@class SCCustomMetadata;

SWIFT_CLASS("_TtC13SignedCallSDK18SCCallOptionsModel")
@interface SCCallOptionsModel : NSObject
- (nonnull instancetype)initWithContext:(NSString * _Nonnull)context receiverCuid:(NSString * _Nonnull)receiverCuid customMetaData:(SCCustomMetadata * _Nullable)customMetaData OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum ButtonTheme : NSInteger;

SWIFT_CLASS("_TtC13SignedCallSDK20SCCallScreenBranding")
@interface SCCallScreenBranding : NSObject
@property (nonatomic, copy) NSString * _Nonnull bgColor;
@property (nonatomic, copy) NSString * _Nonnull fontColor;
@property (nonatomic, copy) NSString * _Nonnull logo;
@property (nonatomic) enum ButtonTheme buttonTheme;
- (nonnull instancetype)initWithBgColor:(NSString * _Nonnull)bgColor fontColor:(NSString * _Nonnull)fontColor logo:(NSString * _Nonnull)logo buttonTheme:(enum ButtonTheme)buttonTheme OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ButtonTheme, open) {
  ButtonThemeLight = 0,
  ButtonThemeDark = 1,
};

typedef SWIFT_ENUM(NSInteger, SCCallStatus, open) {
  SCCallStatusCALL_OVER = 3001,
  SCCallStatusCALL_ANSWERED = 3002,
  SCCallStatusCALL_DECLINED = 3003,
  SCCallStatusCALL_MISSED = 3004,
  SCCallStatusRECEIVER_BUSY_ON_ANOTHER_CALL = 3005,
  SCCallStatusCALL_CANCEL = 3006,
  SCCallStatusDELAYED_ANSWER_ACTION = 3007,
  SCCallStatusERR_MICROPHONE_PERMISSION_NOT_GRANTED = 3008,
  SCCallStatusCALL_CONNECTED = 3010,
};


SWIFT_CLASS("_TtC13SignedCallSDK16SCCustomMetadata")
@interface SCCustomMetadata : NSObject
- (nonnull instancetype)initWithInitiatorImage:(NSString * _Nullable)initiatorImage receiverImage:(NSString * _Nullable)receiverImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, SCError, open) {
  SCErrorERR_NETWORK_NOT_AVAILABLE = 1000,
  SCErrorERR_CALL_CONTEXT_INVALID = 2000,
  SCErrorERR_CLEVERTAP_INSTANCE_REQUIRED = 2001,
  SCErrorERR_CLEVERTAP_URL_NOT_AVAILABLE = 2002,
  SCErrorERR_SIGNEDCALLSDK_NOT_INITIALIZED = 2003,
  SCErrorERR_ACCOUNTID_REQUIRED = 2004,
  SCErrorERR_APIKEY_REQUIRED = 2005,
  SCErrorERR_CUID_MISSING = 2006,
  SCErrorERR_INVALID_LENGTH_CUID = 2007,
  SCErrorERR_INVALID_CUID = 2008,
  SCErrorERR_INVALID_NAME_LENGTH = 2009,
  SCErrorERR_INVALID_APPID = 2010,
  SCErrorERR_PRODUCTION_FIELD_REQUIRED = 2011,
  SCErrorERR_CONTACT_REGISTRATION_FAILED = 2012,
  SCErrorERR_VOIP_SERVICE_FAILED_TO_REGISTER = 2013,
  SCErrorERR_MICROPHONE_PERMISSION_NOT_GRANTED = 5001,
  SCErrorERR_CONTACT_NOT_REACHABLE = 5002,
  SCErrorERR_CAN_NOT_CALL_SELF = 5003,
  SCErrorERR_CUID_ALREADY_CONNECTED_ELSEWHERE = 5004,
  SCErrorERR_FAILURE_IN_MAKE_CALL = 5005,
  SCErrorERR_FEATURE_NOT_AVAILABLE = 5006,
  SCErrorERR_ONGOING_CALL = 5009,
  SCErrorERR_STOP_RETRY = 5007,
  SCErrorERR_NETWORK_LATENCY = 5008,
  SCErrorERR_SIGNALLING_SOCKET_CONNECTION = 5012,
};
static NSString * _Nonnull const SCErrorDomain = @"SignedCallSDK.SCError";

@class NSCoder;

SWIFT_CLASS("_TtC13SignedCallSDK10SCErrorObj")
@interface SCErrorObj : NSError
- (nonnull instancetype)initWithDomain:(NSString * _Nonnull)domain code:(NSInteger)code userInfo:(NSDictionary<NSString *, id> * _Nullable)dict OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end

@class CleverTap;
@class UIViewController;

/// This class will be exposed to developers, all the functions called by developers are in this class.
SWIFT_CLASS("_TtC13SignedCallSDK10SignedCall")
@interface SignedCall : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) SCCallScreenBranding * _Nullable overrideDefaultBranding;)
+ (SCCallScreenBranding * _Nullable)overrideDefaultBranding SWIFT_WARN_UNUSED_RESULT;
+ (void)setOverrideDefaultBranding:(SCCallScreenBranding * _Nullable)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isLoggingEnabled;)
+ (BOOL)isLoggingEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsLoggingEnabled:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) BOOL isEnabled;)
+ (BOOL)isEnabled SWIFT_WARN_UNUSED_RESULT;
+ (void)setIsEnabled:(BOOL)value;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) CleverTap * _Nullable cleverTapInstance;)
+ (CleverTap * _Nullable)cleverTapInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)setCleverTapInstance:(CleverTap * _Nullable)value;
/// this function called the registerVoip function of SCDelegate class to register for voip services and fetch voip token
/// \param rootview RootViewcontroller of user’s app.
///
/// \param appName Provision to display name of the app on callkit screen till iOS version 14.0
///
+ (void)registerVoIPWithRootView:(UIViewController * _Nonnull)rootview appName:(NSString * _Nullable)appName;
/// Clear all the preferences.
+ (void)logout;
+ (void)hangup;
+ (void)disconnectSignallingSocket;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface SignedCall (SWIFT_EXTENSION(SignedCallSDK))
/// Initialize SDK with required account details
/// \param initOptions [String: Any?]
///
/// \param completion (Result<Bool, SCError>) -> Void
///
+ (void)initSDKWithInitOptions:(NSDictionary<NSString *, id> * _Nonnull)initOptions completion:(void (^ _Nonnull)(BOOL, SCErrorObj * _Nullable))completion SWIFT_METHOD_FAMILY(none);
/// Call this function to make an outgoing voip call
/// \param callOptions SCCallOptionsModel
///
/// \param completion (Bool, SCErrorObj?) -> Void
///
+ (void)callWithCallOptions:(SCCallOptionsModel * _Nonnull)callOptions completion:(void (^ _Nonnull)(BOOL, SCErrorObj * _Nullable))completion;
@end



SWIFT_CLASS("_TtC13SignedCallSDK16SimplePingClient")
@interface SimplePingClient : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class CTSimplePingClient;
@class NSData;

@interface SimplePingClient (SWIFT_EXTENSION(SignedCallSDK)) <CTSimplePingDelegate>
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didStartWithAddress:(NSData * _Nonnull)address;
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didFailWithError:(NSError * _Nonnull)error;
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didReceiveUnexpectedPacket:(NSData * _Nonnull)packet;
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didReceivePingResponsePacket:(NSData * _Nonnull)packet sequenceNumber:(uint16_t)sequenceNumber;
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didSendPacket:(NSData * _Nonnull)packet sequenceNumber:(uint16_t)sequenceNumber;
- (void)simplePing:(CTSimplePingClient * _Nonnull)pinger didFailToSendPacket:(NSData * _Nonnull)packet sequenceNumber:(uint16_t)sequenceNumber error:(NSError * _Nonnull)error;
@end




#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif