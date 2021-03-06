//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSMutableArray, _NSFullScreenTileOverlayWindow;

__attribute__((visibility("hidden")))
@interface _NSFullScreenTileOverlayLayer : CALayer
{
    unsigned long long _tileID;
    unsigned long long _parentSpaceID;
    _NSFullScreenTileOverlayWindow *_window;
    BOOL _active;
    NSMutableArray *_windowLayers;
    CALayer *_windowContentLayer;
}

- (void)endPresentation;
- (void)beginPresentation;
- (void)updateFrame;
- (unsigned long long)tileID;
- (void)addWindowWithID:(unsigned int)arg1;
- (id)initWithTileID:(unsigned long long)arg1 parentSpaceID:(unsigned long long)arg2 window:(id)arg3;
- (void)dealloc;

@end

