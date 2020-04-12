///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharingLinkPolicy;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharingLinkPolicy` union.
///
/// Policy for controlling if team members can share links externally
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharingLinkPolicy : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMLOGSharingLinkPolicyTag` enum type represents the possible tag
/// states with which the `DBTEAMLOGSharingLinkPolicy` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMLOGSharingLinkPolicyTag) {
  /// (no description).
  DBTEAMLOGSharingLinkPolicyDefaultPrivate,

  /// (no description).
  DBTEAMLOGSharingLinkPolicyDefaultPublic,

  /// (no description).
  DBTEAMLOGSharingLinkPolicyOnlyPrivate,

  /// (no description).
  DBTEAMLOGSharingLinkPolicyOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMLOGSharingLinkPolicyTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "default_private".
///
/// @return An initialized instance.
///
- (instancetype)initWithDefaultPrivate;

///
/// Initializes union class with tag state of "default_public".
///
/// @return An initialized instance.
///
- (instancetype)initWithDefaultPublic;

///
/// Initializes union class with tag state of "only_private".
///
/// @return An initialized instance.
///
- (instancetype)initWithOnlyPrivate;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "default_private".
///
/// @return Whether the union's current tag state has value "default_private".
///
- (BOOL)isDefaultPrivate;

///
/// Retrieves whether the union's current tag state has value "default_public".
///
/// @return Whether the union's current tag state has value "default_public".
///
- (BOOL)isDefaultPublic;

///
/// Retrieves whether the union's current tag state has value "only_private".
///
/// @return Whether the union's current tag state has value "only_private".
///
- (BOOL)isOnlyPrivate;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMLOGSharingLinkPolicy` union.
///
@interface DBTEAMLOGSharingLinkPolicySerializer : NSObject

///
/// Serializes `DBTEAMLOGSharingLinkPolicy` instances.
///
/// @param instance An instance of the `DBTEAMLOGSharingLinkPolicy` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingLinkPolicy` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharingLinkPolicy *)instance;

///
/// Deserializes `DBTEAMLOGSharingLinkPolicy` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharingLinkPolicy` API object.
///
/// @return An instantiation of the `DBTEAMLOGSharingLinkPolicy` object.
///
+ (DBTEAMLOGSharingLinkPolicy *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
