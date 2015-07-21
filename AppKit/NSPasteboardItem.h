//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSPasteboardReading.h"
#import "NSPasteboardWriting.h"

@class NSArray, NSPasteboard, NSString;

@interface NSPasteboardItem : NSObject <NSPasteboardWriting, NSPasteboardReading>
{
    NSPasteboard *_pasteboard;
    unsigned long long _index;
    long long _gen;
    id _auxObject;
    void *_reserved;
}

+ (id)readableTypesForPasteboard:(id)arg1;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)propertyListForType:(id)arg1;
- (id)stringForType:(id)arg1;
- (id)dataForType:(id)arg1;
- (BOOL)setPropertyList:(id)arg1 forType:(id)arg2;
- (BOOL)setString:(id)arg1 forType:(id)arg2;
- (BOOL)setData:(id)arg1 forType:(id)arg2;
- (BOOL)setDataProvider:(id)arg1 forTypes:(id)arg2;
- (id)_dataProviderForType:(id)arg1;
- (id)_pasteboard;
- (unsigned long long)_index;
- (id)availableTypeFromArray:(id)arg1;
@property(readonly, copy) NSArray *types;
- (id)_auxObject;
- (void)_setPasteboard:(id)arg1 index:(unsigned long long)arg2 generation:(long long)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
