#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MPKMMLPolicyDTO, MPKMMLPartOfDayDTO, MPKMMLProjectDTO, MPKMMLCreatingEventDTOCompanion, MPKMMLCreatingEventDTO, MPKMMLEventDTOCompanion, MPKMMLEventDTO, MPKMMLPartOfDayDTOCompanion, MPKMMLPolicyDTOCompanion, MPKMMLProjectDTOCompanion, MPKMMLRequestResultCompanion, MPKMMLKotlinThrowable, MPKMMLRequestResult, MPKMMLApiDefaultData, MPKMMLKtor_client_coreHttpClient, MPKMMLKotlinArray, MPKMMLKtor_client_coreHttpRequestData, MPKMMLKtor_client_coreHttpResponseData, MPKMMLKtor_client_coreHttpClientEngineConfig, MPKMMLKotlinx_coroutines_coreCoroutineDispatcher, MPKMMLKtor_client_coreHttpClientConfig, MPKMMLKtor_eventsEvents, MPKMMLKtor_client_coreHttpReceivePipeline, MPKMMLKtor_client_coreHttpRequestPipeline, MPKMMLKtor_client_coreHttpResponsePipeline, MPKMMLKtor_client_coreHttpSendPipeline, MPKMMLKotlinException, MPKMMLKotlinRuntimeException, MPKMMLKotlinIllegalStateException, MPKMMLKotlinx_serialization_coreSerializersModule, MPKMMLKotlinx_serialization_coreSerialKind, MPKMMLKotlinNothing, MPKMMLKtor_httpUrl, MPKMMLKtor_httpHttpMethod, MPKMMLKtor_httpOutgoingContent, MPKMMLKtor_httpHttpStatusCode, MPKMMLKtor_utilsGMTDate, MPKMMLKtor_httpHttpProtocolVersion, MPKMMLKtor_client_coreProxyConfig, MPKMMLKotlinAbstractCoroutineContextElement, MPKMMLKotlinx_coroutines_coreCoroutineDispatcherKey, MPKMMLKtor_utilsAttributeKey, MPKMMLKtor_eventsEventDefinition, MPKMMLKtor_utilsPipelinePhase, MPKMMLKtor_utilsPipeline, MPKMMLKtor_client_coreHttpReceivePipelinePhases, MPKMMLKtor_client_coreHttpRequestPipelinePhases, MPKMMLKtor_client_coreHttpResponsePipelinePhases, MPKMMLKtor_client_coreHttpSendPipelinePhases, MPKMMLKtor_httpUrlCompanion, MPKMMLKtor_httpURLProtocol, MPKMMLKtor_httpHttpMethodCompanion, MPKMMLKtor_httpContentType, MPKMMLKotlinCancellationException, MPKMMLKtor_httpHttpStatusCodeCompanion, MPKMMLKtor_utilsGMTDateCompanion, MPKMMLKtor_utilsWeekDay, MPKMMLKtor_utilsMonth, MPKMMLKtor_httpHttpProtocolVersionCompanion, MPKMMLKotlinAbstractCoroutineContextKey, MPKMMLKtor_httpURLProtocolCompanion, MPKMMLKtor_httpHeaderValueParam, MPKMMLKtor_httpHeaderValueWithParametersCompanion, MPKMMLKtor_httpHeaderValueWithParameters, MPKMMLKtor_httpContentTypeCompanion, MPKMMLKotlinEnumCompanion, MPKMMLKotlinEnum, MPKMMLKtor_utilsWeekDayCompanion, MPKMMLKtor_utilsMonthCompanion, MPKMMLKotlinx_coroutines_coreAtomicDesc, MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, MPKMMLKotlinx_coroutines_coreAtomicOp, MPKMMLKotlinx_coroutines_coreOpDescriptor, MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode, MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc, MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc;

@protocol MPKMMLKotlinx_serialization_coreKSerializer, MPKMMLKtor_client_coreHttpClientEngine, MPKMMLIEventApiClient, MPKMMLIPartOfDayApiClient, MPKMMLIPolicyApiClient, MPKMMLIProjectsApiClient, MPKMMLIEventRepository, MPKMMLIPartOfDayRepository, MPKMMLIPolicyRepository, MPKMMLIProjectRepository, MPKMMLKotlinx_serialization_coreEncoder, MPKMMLKotlinx_serialization_coreSerialDescriptor, MPKMMLKotlinx_serialization_coreSerializationStrategy, MPKMMLKotlinx_serialization_coreDecoder, MPKMMLKotlinx_serialization_coreDeserializationStrategy, MPKMMLKtor_client_coreHttpClientEngineCapability, MPKMMLKotlinCoroutineContext, MPKMMLKotlinx_coroutines_coreCoroutineScope, MPKMMLKtor_ioCloseable, MPKMMLKtor_utilsAttributes, MPKMMLKotlinx_serialization_coreCompositeEncoder, MPKMMLKotlinAnnotation, MPKMMLKotlinx_serialization_coreCompositeDecoder, MPKMMLKotlinIterator, MPKMMLKtor_httpHeaders, MPKMMLKotlinx_coroutines_coreJob, MPKMMLKotlinCoroutineContextKey, MPKMMLKotlinCoroutineContextElement, MPKMMLKotlinContinuation, MPKMMLKotlinContinuationInterceptor, MPKMMLKotlinx_coroutines_coreRunnable, MPKMMLKtor_client_coreHttpClientPlugin, MPKMMLKotlinx_coroutines_coreDisposableHandle, MPKMMLKotlinSuspendFunction2, MPKMMLKotlinx_serialization_coreSerializersModuleCollector, MPKMMLKotlinKClass, MPKMMLKtor_httpParameters, MPKMMLKotlinMapEntry, MPKMMLKtor_utilsStringValues, MPKMMLKotlinx_coroutines_coreChildHandle, MPKMMLKotlinx_coroutines_coreChildJob, MPKMMLKotlinSequence, MPKMMLKotlinx_coroutines_coreSelectClause0, MPKMMLKotlinComparable, MPKMMLKotlinFunction, MPKMMLKotlinKDeclarationContainer, MPKMMLKotlinKAnnotatedElement, MPKMMLKotlinKClassifier, MPKMMLKotlinx_coroutines_coreParentJob, MPKMMLKotlinx_coroutines_coreSelectInstance, MPKMMLKotlinSuspendFunction0;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MPKMMLBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MPKMMLBase (MPKMMLBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MPKMMLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MPKMMLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMPKMMLKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MPKMMLNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MPKMMLByte : MPKMMLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MPKMMLUByte : MPKMMLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MPKMMLShort : MPKMMLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MPKMMLUShort : MPKMMLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MPKMMLInt : MPKMMLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MPKMMLUInt : MPKMMLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MPKMMLLong : MPKMMLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MPKMMLULong : MPKMMLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MPKMMLFloat : MPKMMLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MPKMMLDouble : MPKMMLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MPKMMLBoolean : MPKMMLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatingEventDTO")))
@interface MPKMMLCreatingEventDTO : MPKMMLBase
- (instancetype)initWithPolicy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project __attribute__((swift_name("init(policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLCreatingEventDTOCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLCreatingEventDTO *)doCopyPolicy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project __attribute__((swift_name("doCopy(policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable additionalInfo __attribute__((swift_name("additionalInfo")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString *endDate __attribute__((swift_name("endDate")));
@property (readonly) MPKMMLBoolean * _Nullable includesBreakfast __attribute__((swift_name("includesBreakfast")));
@property (readonly) MPKMMLPartOfDayDTO *partOfDay __attribute__((swift_name("partOfDay")));
@property (readonly) MPKMMLPolicyDTO *policy __attribute__((swift_name("policy")));
@property (readonly) MPKMMLProjectDTO * _Nullable project __attribute__((swift_name("project")));
@property (readonly) NSString *startDate __attribute__((swift_name("startDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatingEventDTO.Companion")))
@interface MPKMMLCreatingEventDTOCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLCreatingEventDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDTO")))
@interface MPKMMLEventDTO : MPKMMLBase
- (instancetype)initWithId:(NSString *)id policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project __attribute__((swift_name("init(id:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLEventDTOCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLEventDTO *)doCopyId:(NSString *)id policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project __attribute__((swift_name("doCopy(id:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable additionalInfo __attribute__((swift_name("additionalInfo")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString *endDate __attribute__((swift_name("endDate")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MPKMMLBoolean * _Nullable includesBreakfast __attribute__((swift_name("includesBreakfast")));
@property (readonly) MPKMMLPartOfDayDTO *partOfDay __attribute__((swift_name("partOfDay")));
@property (readonly) MPKMMLPolicyDTO *policy __attribute__((swift_name("policy")));
@property (readonly) MPKMMLProjectDTO * _Nullable project __attribute__((swift_name("project")));
@property (readonly) NSString *startDate __attribute__((swift_name("startDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventDTO.Companion")))
@interface MPKMMLEventDTOCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLEventDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartOfDayDTO")))
@interface MPKMMLPartOfDayDTO : MPKMMLBase
- (instancetype)initWithId:(NSString *)id description:(NSString *)description iconName:(NSString *)iconName type:(NSString *)type __attribute__((swift_name("init(id:description:iconName:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLPartOfDayDTOCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLPartOfDayDTO *)doCopyId:(NSString *)id description:(NSString *)description iconName:(NSString *)iconName type:(NSString *)type __attribute__((swift_name("doCopy(id:description:iconName:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *iconName __attribute__((swift_name("iconName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartOfDayDTO.Companion")))
@interface MPKMMLPartOfDayDTOCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLPartOfDayDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyDTO")))
@interface MPKMMLPolicyDTO : MPKMMLBase
- (instancetype)initWithId:(NSString *)id description:(NSString *)description iconName:(NSString *)iconName type:(NSString *)type policyUsage:(MPKMMLInt * _Nullable)policyUsage policyUsageLimit:(MPKMMLInt * _Nullable)policyUsageLimit __attribute__((swift_name("init(id:description:iconName:type:policyUsage:policyUsageLimit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLPolicyDTOCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLPolicyDTO *)doCopyId:(NSString *)id description:(NSString *)description iconName:(NSString *)iconName type:(NSString *)type policyUsage:(MPKMMLInt * _Nullable)policyUsage policyUsageLimit:(MPKMMLInt * _Nullable)policyUsageLimit __attribute__((swift_name("doCopy(id:description:iconName:type:policyUsage:policyUsageLimit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *iconName __attribute__((swift_name("iconName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) MPKMMLInt * _Nullable policyUsage __attribute__((swift_name("policyUsage")));
@property (readonly) MPKMMLInt * _Nullable policyUsageLimit __attribute__((swift_name("policyUsageLimit")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyDTO.Companion")))
@interface MPKMMLPolicyDTOCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLPolicyDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectDTO")))
@interface MPKMMLProjectDTO : MPKMMLBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLProjectDTOCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLProjectDTO *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectDTO.Companion")))
@interface MPKMMLProjectDTOCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLProjectDTOCompanion *shared __attribute__((swift_name("shared")));
- (id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestResult")))
@interface MPKMMLRequestResult : MPKMMLBase
@property (class, readonly, getter=companion) MPKMMLRequestResultCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLKotlinThrowable * _Nullable)exceptionOrNull __attribute__((swift_name("exceptionOrNull()")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
@property (readonly) BOOL isFailure __attribute__((swift_name("isFailure")));
@property (readonly) BOOL isSuccess __attribute__((swift_name("isSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestResult.Companion")))
@interface MPKMMLRequestResultCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLRequestResultCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLRequestResult *)failureException:(MPKMMLKotlinThrowable *)exception __attribute__((swift_name("failure(exception:)")));
- (MPKMMLRequestResult *)successValue:(id _Nullable)value __attribute__((swift_name("success(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiDefaultData")))
@interface MPKMMLApiDefaultData : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)apiDefaultData __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLApiDefaultData *shared __attribute__((swift_name("shared")));
@property (readonly) BOOL API_IGNORE_UNKNOWN_KEYS __attribute__((swift_name("API_IGNORE_UNKNOWN_KEYS")));
@property (readonly) NSString *BASE_URL __attribute__((swift_name("BASE_URL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiHttpClient")))
@interface MPKMMLApiHttpClient : MPKMMLBase
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MPKMMLKtor_client_coreHttpClient *httpClient __attribute__((swift_name("httpClient")));
@end

__attribute__((swift_name("IEventApiClient")))
@protocol MPKMMLIEventApiClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEventUserId:(NSString *)userId event:(MPKMMLCreatingEventDTO *)event completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createEvent(userId:event:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editExistingEventUserId:(NSString *)userId event:(MPKMMLEventDTO *)event completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("editExistingEvent(userId:event:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllEventsForUserUserId:(NSString *)userId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllEventsForUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventById(userId:eventId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsByPolicyUserId:(NSString *)userId policyId:(NSString *)policyId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventsByPolicy(userId:policyId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("removeEventById(userId:eventId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventApiClient")))
@interface MPKMMLEventApiClient : MPKMMLBase <MPKMMLIEventApiClient>
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEventUserId:(NSString *)userId event:(MPKMMLCreatingEventDTO *)event completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createEvent(userId:event:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editExistingEventUserId:(NSString *)userId event:(MPKMMLEventDTO *)event completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("editExistingEvent(userId:event:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllEventsForUserUserId:(NSString *)userId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllEventsForUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventById(userId:eventId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsByPolicyUserId:(NSString *)userId policyId:(NSString *)policyId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventsByPolicy(userId:policyId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("removeEventById(userId:eventId:completionHandler:)")));
@end

__attribute__((swift_name("IPartOfDayApiClient")))
@protocol MPKMMLIPartOfDayApiClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartsOfDayWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartsOfDay(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartOfDayApiClient")))
@interface MPKMMLPartOfDayApiClient : MPKMMLBase <MPKMMLIPartOfDayApiClient>
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartsOfDayWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartsOfDay(completionHandler:)")));
@end

__attribute__((swift_name("IPolicyApiClient")))
@protocol MPKMMLIPolicyApiClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllPoliciesUserId:(NSString *)userId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllPolicies(userId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyApiClient")))
@interface MPKMMLPolicyApiClient : MPKMMLBase <MPKMMLIPolicyApiClient>
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllPoliciesUserId:(NSString *)userId completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllPolicies(userId:completionHandler:)")));
@end

__attribute__((swift_name("IProjectsApiClient")))
@protocol MPKMMLIProjectsApiClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllProjectsWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllProjects(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectApiClient")))
@interface MPKMMLProjectApiClient : MPKMMLBase <MPKMMLIProjectsApiClient>
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine __attribute__((swift_name("init(engine:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllProjectsWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllProjects(completionHandler:)")));
@end

__attribute__((swift_name("IEventRepository")))
@protocol MPKMMLIEventRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEventUserId:(NSString *)userId policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createEvent(userId:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editEventUserId:(NSString *)userId eventId:(NSString *)eventId policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("editEvent(userId:eventId:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllEventsForUserUserId:(NSString *)userId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllEventsForUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventById(userId:eventId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsByPolicyUserId:(NSString *)userId policyId:(NSString *)policyId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventsByPolicy(userId:policyId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEventByIdUserId:(NSString *)userId event:(MPKMMLEventDTO *)event completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeEventById(userId:event:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventRepository")))
@interface MPKMMLEventRepository : MPKMMLBase <MPKMMLIEventRepository>
- (instancetype)initWithApiClient:(id<MPKMMLIEventApiClient>)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createEventUserId:(NSString *)userId policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createEvent(userId:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editEventUserId:(NSString *)userId eventId:(NSString *)eventId policy:(MPKMMLPolicyDTO *)policy startDate:(NSString *)startDate endDate:(NSString *)endDate partOfDay:(MPKMMLPartOfDayDTO *)partOfDay additionalInfo:(NSString * _Nullable)additionalInfo includesBreakfast:(MPKMMLBoolean * _Nullable)includesBreakfast city:(NSString * _Nullable)city project:(MPKMMLProjectDTO * _Nullable)project completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("editEvent(userId:eventId:policy:startDate:endDate:partOfDay:additionalInfo:includesBreakfast:city:project:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllEventsForUserUserId:(NSString *)userId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllEventsForUser(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventByIdUserId:(NSString *)userId eventId:(NSString *)eventId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventById(userId:eventId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsByPolicyUserId:(NSString *)userId policyId:(NSString *)policyId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEventsByPolicy(userId:policyId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeEventByIdUserId:(NSString *)userId event:(MPKMMLEventDTO *)event completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeEventById(userId:event:completionHandler:)")));
@end

__attribute__((swift_name("IPartOfDayRepository")))
@protocol MPKMMLIPartOfDayRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartsOfDayWithCompletionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartsOfDay(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartOfDayRepository")))
@interface MPKMMLPartOfDayRepository : MPKMMLBase <MPKMMLIPartOfDayRepository>
- (instancetype)initWithApiClient:(id<MPKMMLIPartOfDayApiClient>)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPartsOfDayWithCompletionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPartsOfDay(completionHandler:)")));
@end

__attribute__((swift_name("IPolicyRepository")))
@protocol MPKMMLIPolicyRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPoliciesUserId:(NSString *)userId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPolicies(userId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolicyRepository")))
@interface MPKMMLPolicyRepository : MPKMMLBase <MPKMMLIPolicyRepository>
- (instancetype)initWithApiClient:(id<MPKMMLIPolicyApiClient>)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPoliciesUserId:(NSString *)userId completionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPolicies(userId:completionHandler:)")));
@end

__attribute__((swift_name("IProjectRepository")))
@protocol MPKMMLIProjectRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllProjectsWithCompletionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllProjects(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProjectRepository")))
@interface MPKMMLProjectRepository : MPKMMLBase <MPKMMLIProjectRepository>
- (instancetype)initWithApiClient:(id<MPKMMLIProjectsApiClient>)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllProjectsWithCompletionHandler:(void (^)(MPKMMLRequestResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllProjects(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EngineKt")))
@interface MPKMMLEngineKt : MPKMMLBase
+ (id<MPKMMLKtor_client_coreHttpClientEngine>)getEngine __attribute__((swift_name("getEngine()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultExtensionKt")))
@interface MPKMMLResultExtensionKt : MPKMMLBase
+ (MPKMMLRequestResult *)toRequestResult:(id _Nullable)receiver __attribute__((swift_name("toRequestResult(_:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MPKMMLKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MPKMMLKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MPKMMLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MPKMMLKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MPKMMLKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MPKMMLKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MPKMMLKotlinx_serialization_coreKSerializer <MPKMMLKotlinx_serialization_coreSerializationStrategy, MPKMMLKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MPKMMLKotlinThrowable : MPKMMLBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MPKMMLKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPKMMLKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol MPKMMLKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<MPKMMLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol MPKMMLKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol MPKMMLKtor_client_coreHttpClientEngine <MPKMMLKotlinx_coroutines_coreCoroutineScope, MPKMMLKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(MPKMMLKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(MPKMMLKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(MPKMMLKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) MPKMMLKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) MPKMMLKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<MPKMMLKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface MPKMMLKtor_client_coreHttpClient : MPKMMLBase <MPKMMLKotlinx_coroutines_coreCoroutineScope, MPKMMLKtor_ioCloseable>
- (instancetype)initWithEngine:(id<MPKMMLKtor_client_coreHttpClientEngine>)engine userConfig:(MPKMMLKtor_client_coreHttpClientConfig *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (MPKMMLKtor_client_coreHttpClient *)configBlock:(void (^)(MPKMMLKtor_client_coreHttpClientConfig *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<MPKMMLKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MPKMMLKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<MPKMMLKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<MPKMMLKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) MPKMMLKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) MPKMMLKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) MPKMMLKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) MPKMMLKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) MPKMMLKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) MPKMMLKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("KotlinException")))
@interface MPKMMLKotlinException : MPKMMLKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MPKMMLKotlinRuntimeException : MPKMMLKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MPKMMLKotlinIllegalStateException : MPKMMLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MPKMMLKotlinCancellationException : MPKMMLKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MPKMMLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MPKMMLKotlinx_serialization_coreEncoder
@required
- (id<MPKMMLKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MPKMMLKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MPKMMLKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MPKMMLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MPKMMLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MPKMMLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MPKMMLKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MPKMMLKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MPKMMLKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MPKMMLKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MPKMMLKotlinx_serialization_coreDecoder
@required
- (id<MPKMMLKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MPKMMLKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MPKMMLKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MPKMMLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MPKMMLKotlinArray : MPKMMLBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(MPKMMLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MPKMMLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface MPKMMLKtor_client_coreHttpRequestData : MPKMMLBase
- (instancetype)initWithUrl:(MPKMMLKtor_httpUrl *)url method:(MPKMMLKtor_httpHttpMethod *)method headers:(id<MPKMMLKtor_httpHeaders>)headers body:(MPKMMLKtor_httpOutgoingContent *)body executionContext:(id<MPKMMLKotlinx_coroutines_coreJob>)executionContext attributes:(id<MPKMMLKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<MPKMMLKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MPKMMLKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) MPKMMLKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<MPKMMLKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<MPKMMLKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MPKMMLKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) MPKMMLKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface MPKMMLKtor_client_coreHttpResponseData : MPKMMLBase
- (instancetype)initWithStatusCode:(MPKMMLKtor_httpHttpStatusCode *)statusCode requestTime:(MPKMMLKtor_utilsGMTDate *)requestTime headers:(id<MPKMMLKtor_httpHeaders>)headers version:(MPKMMLKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<MPKMMLKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<MPKMMLKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<MPKMMLKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MPKMMLKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) MPKMMLKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface MPKMMLKtor_client_coreHttpClientEngineConfig : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property MPKMMLKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol MPKMMLKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<MPKMMLKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<MPKMMLKotlinCoroutineContextElement> _Nullable)getKey:(id<MPKMMLKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<MPKMMLKotlinCoroutineContext>)minusKeyKey:(id<MPKMMLKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<MPKMMLKotlinCoroutineContext>)plusContext:(id<MPKMMLKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol MPKMMLKotlinCoroutineContextElement <MPKMMLKotlinCoroutineContext>
@required
@property (readonly) id<MPKMMLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface MPKMMLKotlinAbstractCoroutineContextElement : MPKMMLBase <MPKMMLKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<MPKMMLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<MPKMMLKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol MPKMMLKotlinContinuationInterceptor <MPKMMLKotlinCoroutineContextElement>
@required
- (id<MPKMMLKotlinContinuation>)interceptContinuationContinuation:(id<MPKMMLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<MPKMMLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface MPKMMLKotlinx_coroutines_coreCoroutineDispatcher : MPKMMLKotlinAbstractCoroutineContextElement <MPKMMLKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<MPKMMLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<MPKMMLKotlinCoroutineContext>)context block:(id<MPKMMLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<MPKMMLKotlinCoroutineContext>)context block:(id<MPKMMLKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<MPKMMLKotlinContinuation>)interceptContinuationContinuation:(id<MPKMMLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<MPKMMLKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (MPKMMLKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (MPKMMLKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(MPKMMLKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<MPKMMLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol MPKMMLKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface MPKMMLKtor_client_coreHttpClientConfig : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MPKMMLKtor_client_coreHttpClientConfig *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(MPKMMLKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(MPKMMLKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<MPKMMLKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(MPKMMLKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(MPKMMLKtor_client_coreHttpClientConfig *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol MPKMMLKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(MPKMMLKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(MPKMMLKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<MPKMMLKtor_utilsAttributeKey *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface MPKMMLKtor_eventsEvents : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(MPKMMLKtor_eventsEventDefinition *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<MPKMMLKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(MPKMMLKtor_eventsEventDefinition *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(MPKMMLKtor_eventsEventDefinition *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface MPKMMLKtor_utilsPipeline : MPKMMLBase
- (instancetype)initWithPhase:(MPKMMLKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(MPKMMLKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(MPKMMLKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(id)context subject:(id)subject completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(MPKMMLKtor_utilsPipelinePhase *)reference phase:(MPKMMLKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(MPKMMLKtor_utilsPipelinePhase *)reference phase:(MPKMMLKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(MPKMMLKtor_utilsPipelinePhase *)phase block:(id<MPKMMLKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(MPKMMLKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(MPKMMLKtor_utilsPipeline *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(MPKMMLKtor_utilsPipeline *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(MPKMMLKtor_utilsPipeline *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<MPKMMLKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<MPKMMLKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface MPKMMLKtor_client_coreHttpReceivePipeline : MPKMMLKtor_utilsPipeline
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MPKMMLKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MPKMMLKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface MPKMMLKtor_client_coreHttpRequestPipeline : MPKMMLKtor_utilsPipeline
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MPKMMLKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MPKMMLKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface MPKMMLKtor_client_coreHttpResponsePipeline : MPKMMLKtor_utilsPipeline
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MPKMMLKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MPKMMLKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface MPKMMLKtor_client_coreHttpSendPipeline : MPKMMLKtor_utilsPipeline
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(MPKMMLKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<MPKMMLKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(MPKMMLKotlinArray *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MPKMMLKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MPKMMLKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPKMMLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MPKMMLKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MPKMMLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MPKMMLKotlinx_serialization_coreSerializersModule : MPKMMLBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MPKMMLKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPKMMLKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MPKMMLKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MPKMMLKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPKMMLKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPKMMLKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MPKMMLKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MPKMMLKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MPKMMLKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MPKMMLKotlinx_serialization_coreSerialKind : MPKMMLBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MPKMMLKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MPKMMLKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MPKMMLKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MPKMMLKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MPKMMLKotlinNothing : MPKMMLBase
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MPKMMLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface MPKMMLKtor_httpUrl : MPKMMLBase
@property (class, readonly, getter=companion) MPKMMLKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<MPKMMLKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) MPKMMLKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface MPKMMLKtor_httpHttpMethod : MPKMMLBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol MPKMMLKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<MPKMMLKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol MPKMMLKtor_httpHeaders <MPKMMLKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface MPKMMLKtor_httpOutgoingContent : MPKMMLBase
- (id _Nullable)getPropertyKey:(MPKMMLKtor_utilsAttributeKey *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(MPKMMLKtor_utilsAttributeKey *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<MPKMMLKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) MPKMMLLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) MPKMMLKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<MPKMMLKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol MPKMMLKotlinx_coroutines_coreJob <MPKMMLKotlinCoroutineContextElement>
@required
- (id<MPKMMLKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<MPKMMLKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(MPKMMLKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (MPKMMLKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<MPKMMLKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(MPKMMLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<MPKMMLKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(MPKMMLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<MPKMMLKotlinx_coroutines_coreJob>)plusOther_:(id<MPKMMLKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<MPKMMLKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<MPKMMLKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface MPKMMLKtor_httpHttpStatusCode : MPKMMLBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (MPKMMLKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MPKMMLKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface MPKMMLKtor_utilsGMTDate : MPKMMLBase <MPKMMLKotlinComparable>
@property (class, readonly, getter=companion) MPKMMLKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MPKMMLKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (MPKMMLKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(MPKMMLKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(MPKMMLKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MPKMMLKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) MPKMMLKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface MPKMMLKtor_httpHttpProtocolVersion : MPKMMLBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface MPKMMLKtor_client_coreProxyConfig : MPKMMLBase
- (instancetype)initWithUrl:(MPKMMLKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPKMMLKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol MPKMMLKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol MPKMMLKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<MPKMMLKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface MPKMMLKotlinAbstractCoroutineContextKey : MPKMMLBase <MPKMMLKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<MPKMMLKotlinCoroutineContextKey>)baseKey safeCast:(id<MPKMMLKotlinCoroutineContextElement> _Nullable (^)(id<MPKMMLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface MPKMMLKotlinx_coroutines_coreCoroutineDispatcherKey : MPKMMLKotlinAbstractCoroutineContextKey
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<MPKMMLKotlinCoroutineContextKey>)baseKey safeCast:(id<MPKMMLKotlinCoroutineContextElement> _Nullable (^)(id<MPKMMLKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol MPKMMLKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol MPKMMLKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(MPKMMLKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) MPKMMLKtor_utilsAttributeKey *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface MPKMMLKtor_utilsAttributeKey : MPKMMLBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface MPKMMLKtor_eventsEventDefinition : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol MPKMMLKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface MPKMMLKtor_utilsPipelinePhase : MPKMMLBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MPKMMLKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol MPKMMLKotlinSuspendFunction2 <MPKMMLKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface MPKMMLKtor_client_coreHttpReceivePipelinePhases : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface MPKMMLKtor_client_coreHttpRequestPipelinePhases : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface MPKMMLKtor_client_coreHttpResponsePipelinePhases : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface MPKMMLKtor_client_coreHttpSendPipelinePhases : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) MPKMMLKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MPKMMLKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MPKMMLKotlinKClass>)kClass provider:(id<MPKMMLKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MPKMMLKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MPKMMLKotlinKClass>)kClass serializer:(id<MPKMMLKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MPKMMLKotlinKClass>)baseClass actualClass:(id<MPKMMLKotlinKClass>)actualClass actualSerializer:(id<MPKMMLKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MPKMMLKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<MPKMMLKotlinKClass>)baseClass defaultDeserializerProvider:(id<MPKMMLKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<MPKMMLKotlinKClass>)baseClass defaultSerializerProvider:(id<MPKMMLKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MPKMMLKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MPKMMLKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MPKMMLKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MPKMMLKotlinKClass <MPKMMLKotlinKDeclarationContainer, MPKMMLKotlinKAnnotatedElement, MPKMMLKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface MPKMMLKtor_httpUrlCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol MPKMMLKtor_httpParameters <MPKMMLKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface MPKMMLKtor_httpURLProtocol : MPKMMLBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (MPKMMLKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface MPKMMLKtor_httpHttpMethodCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<MPKMMLKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) MPKMMLKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MPKMMLKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface MPKMMLKtor_httpHeaderValueWithParameters : MPKMMLBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MPKMMLKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<MPKMMLKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface MPKMMLKtor_httpContentType : MPKMMLKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<MPKMMLKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<MPKMMLKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(MPKMMLKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (MPKMMLKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (MPKMMLKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol MPKMMLKotlinx_coroutines_coreChildHandle <MPKMMLKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(MPKMMLKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<MPKMMLKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol MPKMMLKotlinx_coroutines_coreChildJob <MPKMMLKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<MPKMMLKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol MPKMMLKotlinSequence
@required
- (id<MPKMMLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol MPKMMLKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<MPKMMLKotlinx_coroutines_coreSelectInstance>)select block:(id<MPKMMLKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface MPKMMLKtor_httpHttpStatusCodeCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) MPKMMLKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<MPKMMLKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface MPKMMLKtor_utilsGMTDateCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) MPKMMLKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MPKMMLKotlinEnum : MPKMMLBase <MPKMMLKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MPKMMLKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MPKMMLKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface MPKMMLKtor_utilsWeekDay : MPKMMLKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MPKMMLKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (MPKMMLKotlinArray *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface MPKMMLKtor_utilsMonth : MPKMMLKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) MPKMMLKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) MPKMMLKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MPKMMLKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MPKMMLKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MPKMMLKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MPKMMLKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MPKMMLKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MPKMMLKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MPKMMLKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MPKMMLKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MPKMMLKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MPKMMLKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MPKMMLKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (MPKMMLKotlinArray *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface MPKMMLKtor_httpHttpProtocolVersionCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (MPKMMLKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) MPKMMLKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface MPKMMLKtor_httpURLProtocolCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) MPKMMLKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) MPKMMLKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) MPKMMLKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) MPKMMLKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) MPKMMLKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, MPKMMLKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface MPKMMLKtor_httpHeaderValueParam : MPKMMLBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (MPKMMLKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface MPKMMLKtor_httpHeaderValueWithParametersCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<MPKMMLKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface MPKMMLKtor_httpContentTypeCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) MPKMMLKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol MPKMMLKotlinx_coroutines_coreParentJob <MPKMMLKotlinx_coroutines_coreJob>
@required
- (MPKMMLKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol MPKMMLKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<MPKMMLKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(MPKMMLKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(MPKMMLKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<MPKMMLKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MPKMMLKotlinSuspendFunction0 <MPKMMLKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnum.Companion")))
@interface MPKMMLKotlinEnumCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface MPKMMLKtor_utilsWeekDayCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MPKMMLKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface MPKMMLKtor_utilsMonthCompanion : MPKMMLBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MPKMMLKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (MPKMMLKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (MPKMMLKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface MPKMMLKotlinx_coroutines_coreAtomicDesc : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MPKMMLKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(MPKMMLKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@property MPKMMLKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface MPKMMLKotlinx_coroutines_coreOpDescriptor : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(MPKMMLKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPKMMLKotlinx_coroutines_coreAtomicOp * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : MPKMMLKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) MPKMMLKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface MPKMMLKotlinx_coroutines_coreAtomicOp : MPKMMLKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) MPKMMLKotlinx_coroutines_coreAtomicOp *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode : MPKMMLBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(MPKMMLBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MPKMMLBoolean *(^)(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(MPKMMLBoolean *(^)(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(MPKMMLBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc *)describeAddLastNode:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(MPKMMLBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : MPKMMLKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(MPKMMLKotlinx_coroutines_coreAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(MPKMMLKotlinx_coroutines_coreAtomicOp *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPKMMLKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AddLastDesc")))
@interface MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc : MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPKMMLKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *node __attribute__((swift_name("node")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.RemoveFirstDesc")))
@interface MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc : MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(MPKMMLKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) MPKMMLKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) id _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
