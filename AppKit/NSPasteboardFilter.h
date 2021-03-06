//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface NSPasteboardFilter : NSObject
{
    NSString *_intype;
    NSString *_outtype;
    NSDictionary *_spec;
}

+ (id)filterWithFilterSpec:(id)arg1 intype:(id)arg2 outtype:(id)arg3;
+ (id)_conversionChainFrom:(id)arg1 to:(id)arg2;
+ (id)_typesFilterableToType:(id)arg1;
+ (id)_typesFilterableFromType:(id)arg1;
+ (void)initialize;
@property(readonly, copy) NSDictionary *spec; // @synthesize spec=_spec;
@property(readonly, copy) NSString *outtype; // @synthesize outtype=_outtype;
@property(readonly, copy) NSString *intype; // @synthesize intype=_intype;
- (id)description;
- (id)_computeDataFromData:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithFilterSpec:(id)arg1 intype:(id)arg2 outtype:(id)arg3;

@end

