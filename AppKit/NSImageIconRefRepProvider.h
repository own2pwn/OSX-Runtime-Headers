//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface NSImageIconRefRepProvider : NSObject <NSCopying>
{
    struct OpaqueIconRef *_iconRef;
    BOOL _includeThumbnail;
    NSArray *_representations;
}

@property(readonly) BOOL includeThumbnail; // @synthesize includeThumbnail=_includeThumbnail;
@property(readonly) struct OpaqueIconRef *iconRef; // @synthesize iconRef=_iconRef;
@property(readonly) NSArray *representations;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithIconRef:(struct OpaqueIconRef *)arg1 includeThumbnail:(BOOL)arg2;

@end

