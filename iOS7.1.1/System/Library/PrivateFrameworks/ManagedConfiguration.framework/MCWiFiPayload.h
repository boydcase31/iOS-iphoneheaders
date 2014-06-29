/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, NSDictionary, NSArray, NSNumber;

@interface MCWiFiPayload : MCPayload {

	bool _isHidden;
	bool _isWEP;
	bool _isWPA;
	bool _passwordRequired;
	bool _usernameRequired;
	bool _autoJoin;
	bool _proxyPACFallbackAllowed;
	bool _isHotspot;
	bool _serviceProviderRoamingEnabled;
	int _proxyType;
	NSString* _ssid;
	NSString* _encryptionType;
	NSDictionary* _eapClientConfig;
	NSString* _password;
	NSString* _username;
	NSString* _certificateUUID;
	NSArray* _payloadCertificateAnchorUUID;
	NSString* _proxyServer;
	NSNumber* _proxyServerPort;
	NSString* _proxyUsername;
	NSString* _proxyPassword;
	NSString* _proxyPACURLString;
	NSString* _credentialUUID;
	NSNumber* _priority;
	NSString* _domainName;
	NSString* _HESSID;
	NSArray* _roamingConsortiumOIs;
	NSArray* _NAIRealmNames;
	NSArray* _MCCAndMNCs;
	NSString* _displayedOperatorName;

}

@property (nonatomic,retain) NSString * ssid;                                                                        //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) bool isHidden;                                                                          //@synthesize isHidden=_isHidden - In the implementation block
@property (nonatomic,retain) NSString * encryptionType;                                                              //@synthesize encryptionType=_encryptionType - In the implementation block
@property (assign,nonatomic) bool isWEP;                                                                             //@synthesize isWEP=_isWEP - In the implementation block
@property (assign,nonatomic) bool isWPA;                                                                             //@synthesize isWPA=_isWPA - In the implementation block
@property (nonatomic,retain) NSDictionary * eapClientConfig;                                                         //@synthesize eapClientConfig=_eapClientConfig - In the implementation block
@property (assign,nonatomic) bool passwordRequired;                                                                  //@synthesize passwordRequired=_passwordRequired - In the implementation block
@property (nonatomic,retain) NSString * password;                                                                    //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) bool usernameRequired;                                                                  //@synthesize usernameRequired=_usernameRequired - In the implementation block
@property (nonatomic,retain) NSString * username;                                                                    //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) bool autoJoin;                                                                          //@synthesize autoJoin=_autoJoin - In the implementation block
@property (nonatomic,retain) NSString * certificateUUID;                                                             //@synthesize certificateUUID=_certificateUUID - In the implementation block
@property (nonatomic,retain) NSArray * payloadCertificateAnchorUUID;                                                 //@synthesize payloadCertificateAnchorUUID=_payloadCertificateAnchorUUID - In the implementation block
@property (assign,nonatomic) int proxyType;                                                                          //@synthesize proxyType=_proxyType - In the implementation block
@property (nonatomic,retain) NSString * proxyServer;                                                                 //@synthesize proxyServer=_proxyServer - In the implementation block
@property (nonatomic,retain) NSNumber * proxyServerPort;                                                             //@synthesize proxyServerPort=_proxyServerPort - In the implementation block
@property (nonatomic,retain) NSString * proxyUsername;                                                               //@synthesize proxyUsername=_proxyUsername - In the implementation block
@property (nonatomic,retain) NSString * proxyPassword;                                                               //@synthesize proxyPassword=_proxyPassword - In the implementation block
@property (nonatomic,retain) NSString * proxyPACURLString;                                                           //@synthesize proxyPACURLString=_proxyPACURLString - In the implementation block
@property (assign,nonatomic) bool proxyPACFallbackAllowed;                                                           //@synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed - In the implementation block
@property (nonatomic,retain) NSString * credentialUUID;                                                              //@synthesize credentialUUID=_credentialUUID - In the implementation block
@property (assign,nonatomic) bool isHotspot;                                                                         //@synthesize isHotspot=_isHotspot - In the implementation block
@property (nonatomic,retain) NSNumber * priority;                                                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSString * domainName;                                                                  //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,retain) NSString * HESSID;                                                                      //@synthesize HESSID=_HESSID - In the implementation block
@property (assign,getter=isServiceProviderRoamingEnabled,nonatomic) bool serviceProviderRoamingEnabled;              //@synthesize serviceProviderRoamingEnabled=_serviceProviderRoamingEnabled - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortiumOIs;                                                         //@synthesize roamingConsortiumOIs=_roamingConsortiumOIs - In the implementation block
@property (nonatomic,retain) NSArray * NAIRealmNames;                                                                //@synthesize NAIRealmNames=_NAIRealmNames - In the implementation block
@property (nonatomic,retain) NSArray * MCCAndMNCs;                                                                   //@synthesize MCCAndMNCs=_MCCAndMNCs - In the implementation block
@property (nonatomic,retain) NSString * displayedOperatorName;                                                       //@synthesize displayedOperatorName=_displayedOperatorName - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(int)proxyType;
-(bool)isHidden;
-(id)description;
-(void)setIsHidden:(bool)arg1 ;
-(id)priority;
-(void).cxx_destruct;
-(void)setPriority:(id)arg1 ;
-(void)setEncryptionType:(id)arg1 ;
-(id)encryptionType;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(id)proxyServer;
-(void)setProxyServer:(id)arg1 ;
-(bool)_eapConfigIsValid:(id)arg1 error:(id*)arg2 ;
-(id)_eapUsernameFromConfig:(id)arg1 isRequired:(bool*)arg2 ;
-(id)_eapPasswordFromConfig:(id)arg1 isRequired:(bool*)arg2 ;
-(bool)_isEAPSIMConfig:(id)arg1 ;
-(void)setEapClientConfig:(id)arg1 ;
-(void)setProxyType:(int)arg1 ;
-(id)ssid;
-(bool)isHotspot;
-(id)roamingConsortiumOIs;
-(void)setRoamingConsortiumOIs:(id)arg1 ;
-(id)NAIRealmNames;
-(void)setNAIRealmNames:(id)arg1 ;
-(id)MCCAndMNCs;
-(void)setMCCAndMNCs:(id)arg1 ;
-(id)HESSID;
-(bool)isServiceProviderRoamingEnabled;
-(id)displayedOperatorName;
-(id)eapClientConfig;
-(id)proxyServerPort;
-(id)proxyUsername;
-(id)proxyPassword;
-(id)proxyPACURLString;
-(bool)proxyPACFallbackAllowed;
-(void)setSsid:(id)arg1 ;
-(bool)isWEP;
-(void)setIsWEP:(bool)arg1 ;
-(bool)isWPA;
-(void)setIsWPA:(bool)arg1 ;
-(bool)passwordRequired;
-(void)setPasswordRequired:(bool)arg1 ;
-(bool)usernameRequired;
-(void)setUsernameRequired:(bool)arg1 ;
-(bool)autoJoin;
-(void)setAutoJoin:(bool)arg1 ;
-(id)certificateUUID;
-(void)setCertificateUUID:(id)arg1 ;
-(id)payloadCertificateAnchorUUID;
-(void)setPayloadCertificateAnchorUUID:(id)arg1 ;
-(void)setProxyServerPort:(id)arg1 ;
-(void)setProxyUsername:(id)arg1 ;
-(void)setProxyPassword:(id)arg1 ;
-(void)setProxyPACURLString:(id)arg1 ;
-(void)setProxyPACFallbackAllowed:(bool)arg1 ;
-(id)credentialUUID;
-(void)setCredentialUUID:(id)arg1 ;
-(void)setIsHotspot:(bool)arg1 ;
-(void)setHESSID:(id)arg1 ;
-(void)setServiceProviderRoamingEnabled:(bool)arg1 ;
-(void)setDisplayedOperatorName:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)domainName;
-(void)setDomainName:(id)arg1 ;
-(id)username;
@end
