//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingMomentumCalculatorBase.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingMomentumDampenedSpringCalculator : _NSScrollingMomentumCalculatorBase
{
    double _durationUntilStop;
    struct CGPoint _initialRubberbandingOrigin;
}

- (struct CGPoint)positionAfterDuration:(double)arg1;
- (double)velocityAfterDuration:(double)arg1;
- (double)durationUntilStop;
- (void)_calculateInitialVelocity;
- (void)_calculateDestination;
- (id)initWithInitialOrigin:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2 documentFrame:(struct CGRect)arg3 constrainedClippingOrigin:(struct CGPoint)arg4 clippingSize:(struct CGSize)arg5 tolerance:(struct CGSize)arg6 maxDuration:(double)arg7;

@end

