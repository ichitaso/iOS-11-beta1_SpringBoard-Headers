//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSObject<OS_dispatch_semaphore>, SBIcon;

@interface SBDeleteIconAlertItem : SBAlertItem
{
    SBIcon *_icon;
    _Bool _checkedDocumentsInCloudState;
    _Bool _appHasDocumentsOrDataInCloud;
    _Bool _askedUserAboutDocumentsInCloud;
    _Bool _askedUserAboutDocumentsWithPendingUpdates;
    _Bool _checkedForRelatedData;
    _Bool _finishedCheckingForRelatedData;
    _Bool _appHasHealthKitData;
    _Bool _appHasGameKitData;
    NSObject<OS_dispatch_semaphore> *_healthKitResponseSem;
}

- (void).cxx_destruct;
- (_Bool)_hasRelatedData;
- (void)_waitForRelatedDataResponsesIfNeeded;
- (void)_startCheckingForRelatedExternalDataIfNeeded;
- (_Bool)dismissOnLock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_checkDocumentsInCloudStateIfNeeded;
- (id)icon;
- (void)dealloc;
- (id)initWithIcon:(id)arg1;

@end

