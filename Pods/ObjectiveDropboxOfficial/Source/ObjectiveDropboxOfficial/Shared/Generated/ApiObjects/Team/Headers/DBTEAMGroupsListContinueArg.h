///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMGroupsListContinueArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupsListContinueArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupsListContinueArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Indicates from what point to get the next set of groups.
@property (nonatomic, readonly, copy) NSString *cursor;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param cursor Indicates from what point to get the next set of groups.
///
/// @return An initialized instance.
///
- (instancetype)initWithCursor:(NSString *)cursor;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupsListContinueArg` struct.
///
@interface DBTEAMGroupsListContinueArgSerializer : NSObject

///
/// Serializes `DBTEAMGroupsListContinueArg` instances.
///
/// @param instance An instance of the `DBTEAMGroupsListContinueArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupsListContinueArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMGroupsListContinueArg *)instance;

///
/// Deserializes `DBTEAMGroupsListContinueArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupsListContinueArg` API object.
///
/// @return An instantiation of the `DBTEAMGroupsListContinueArg` object.
///
+ (DBTEAMGroupsListContinueArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
