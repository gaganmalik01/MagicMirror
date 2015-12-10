//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EPSConverter : NSObject
{
    CDUnknownBlockType _progressBlock;
}


- (void)beginDocument;
- (void)beginPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (id)convertEPSAtURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)convertEPSAtURL:(id)arg1 toURL:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)convertEPSData:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (BOOL)convertEPSWithProvider:(struct CGDataProvider *)arg1 consumer:(struct CGDataConsumer *)arg2;
- (void)converterMessage:(id)arg1;
- (void)converterProgress;
- (void)converterReleased;
- (void)endDocumentSucceeded:(_Bool)arg1;
- (void)endPageNumber:(unsigned long long)arg1 info:(id)arg2;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;

@end
