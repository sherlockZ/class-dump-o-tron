//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class NSString;

@interface GPUTraceResources : GPUTraceOutlineItem
{
    NSString *_resourceCategory;
}

+ (id)resourceCategoryForType:(unsigned int)arg1;
+ (unsigned int)resourceTypeForCategory:(id)arg1;
@property(readonly, nonatomic) NSString *resourceCategory; // @synthesize resourceCategory=_resourceCategory;
- (void).cxx_destruct;
- (void)releaseRealizedResources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)UUIDSection;
- (id)initWithController:(id)arg1 parent:(id)arg2 label:(id)arg3 category:(id)arg4;

@end

