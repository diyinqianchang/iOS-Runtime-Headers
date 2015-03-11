/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface _SBFBlockObserver : NSObject <SBFObserver> {
    id _completionBlock;
    id _failureBlock;
    id _resultBlock;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)dealloc;
- (id)initWithResultBlock:(id)arg1 completionBlock:(id)arg2 failureBlock:(id)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end