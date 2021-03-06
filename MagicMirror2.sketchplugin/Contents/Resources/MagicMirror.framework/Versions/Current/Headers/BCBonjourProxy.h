//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BCNetworkServiceDelegate.h"

@class BCBonjourConnection, BCNetworkService, NSDictionary, NSString, NSUUID;

@interface BCBonjourProxy : NSObject <BCNetworkServiceDelegate>
{
    CDUnknownBlockType _handler;
    NSUUID *_uuid;
    NSString *_model;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_idiom;
    long long _state;
    long long _remoteState;
    BCBonjourConnection *_connection;
    BCNetworkService *_service;
    NSDictionary *_extendedInfo;
}

+ (id)keyPathsForValuesAffectingConnected;
+ (id)keyPathsForValuesAffectingRemoteStateString;
+ (id)keyPathsForValuesAffectingStateString;
+ (id)keyPathsForValuesAffectingSystem;

- (void)_startConnecting;
- (void)cleanup;
- (void)connect;
- (BOOL)connected;
@property(retain, nonatomic) BCBonjourConnection *connection; // @synthesize connection=_connection;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) unsigned long long deviceMemory;
- (void)disconnect;
@property(retain, nonatomic) NSDictionary *extendedInfo; // @synthesize extendedInfo=_extendedInfo;
- (void)forceConnect;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSString *idiom; // @synthesize idiom=_idiom;
- (id)initWithService:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *name;
- (int)openSocket;
@property long long remoteState; // @synthesize remoteState=_remoteState;
@property(readonly, nonatomic) NSString *remoteStateString;
@property(readonly, nonatomic) double scale;
- (void)sendMessage:(id)arg1;
@property(retain, nonatomic) BCNetworkService *service; // @synthesize service=_service;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(retain, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) struct CGSize size;
- (void)startConnecting;
@property(readonly, nonatomic) NSString *stateString;
@property(readonly, nonatomic) NSString *system;
- (void)updateProxyWithSystemDictionary:(id)arg1;
- (void)updateWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

