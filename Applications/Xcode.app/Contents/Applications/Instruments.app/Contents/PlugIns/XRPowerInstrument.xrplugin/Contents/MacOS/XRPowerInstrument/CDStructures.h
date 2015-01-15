//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct XRGraphPoint {
    unsigned long long _field1;
    float _field2;
    void *_field3;
};

struct XRMeasurementStreamColumn {
    id _field1;
    id _field2;
    struct {
        unsigned int :1;
    } _field3;
    struct XRMeasurementStreamColumnLabel *_field4;
    unsigned char _field5;
};

struct XRMeasurementStreamColumnLabel {
    float _field1;
    float _field2;
    id _field3;
};

struct XRPathAttribute {
    id _field1;
    id _field2;
    double _field3;
    double *_field4;
    double _field5;
    double _field6;
};

struct XRPowerTimelineEntry {
    struct XRTimeRange range;
    unsigned long long idx;
    unsigned int recno;
};

struct XRPowerTimelinePrivate {
    struct _TimelineIdxStrat _field1;
    struct XRSpatialIndexAnonymousPagePool _field2;
    struct XRSpatialIndex<XRPowerTimelineEntry, _Enclosure> _field3;
};

struct XRSpatialIndex<XRPowerTimelineEntry, _Enclosure> {
    struct XRSpatialIndexPagePool *_field1;
    struct XRSpatialIndexPageRef _field2;
    struct XRSpatialIndexStrategy<XRPowerTimelineEntry, _Enclosure> *_field3;
};

struct XRSpatialIndexAnonymousPagePool {
    CDUnknownFunctionPointerType *_field1;
    struct vector<void *, std::__1::allocator<void *>> _field2;
    unsigned long long _field3;
};

struct XRSpatialIndexPagePool;

struct XRSpatialIndexPageRef {
    unsigned int :2;
    unsigned int :30;
};

struct XRSpatialIndexStrategy<XRPowerTimelineEntry, _Enclosure>;

struct XRTimeRange {
    unsigned long long start;
    unsigned long long length;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _TimelineIdxStrat {
    CDUnknownFunctionPointerType *_field1;
};

struct vector<void *, std::__1::allocator<void *>> {
    void **_field1;
    void **_field2;
    struct __compressed_pair<void **, std::__1::allocator<void *>> {
        void **_field1;
    } _field3;
};
