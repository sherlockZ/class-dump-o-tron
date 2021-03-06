//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UIScrollView, UIView;

@protocol ABMembersDataSourceDelegate <NSObject>
- (_Bool)abDataSource:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (_Bool)abDataSourceAllowsShowingPersonsCards:(id)arg1;
- (_Bool)abDataSource:(id)arg1 selectedPerson:(void *)arg2 atIndexPath:(NSIndexPath *)arg3 withMemberCell:(UIView *)arg4 animate:(_Bool)arg5;

@optional
- (void)abScrollViewDidBeginDragging:(UIScrollView *)arg1;
@end

