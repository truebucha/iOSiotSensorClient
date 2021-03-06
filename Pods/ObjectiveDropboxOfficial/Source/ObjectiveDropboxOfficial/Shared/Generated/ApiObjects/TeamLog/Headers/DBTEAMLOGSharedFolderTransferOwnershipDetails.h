///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGSharedFolderTransferOwnershipDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedFolderTransferOwnershipDetails` struct.
///
/// Transferred ownership of shared folder to another member.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedFolderTransferOwnershipDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The email address of the previous shared folder owner.
@property (nonatomic, readonly, copy, nullable) NSString *previousOwnerEmail;

/// The email address of the new shared folder owner.
@property (nonatomic, readonly, copy) NSString *dNewOwnerEmail;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewOwnerEmail The email address of the new shared folder owner.
/// @param previousOwnerEmail The email address of the previous shared folder
/// owner.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewOwnerEmail:(NSString *)dNewOwnerEmail
                    previousOwnerEmail:(nullable NSString *)previousOwnerEmail;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewOwnerEmail The email address of the new shared folder owner.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewOwnerEmail:(NSString *)dNewOwnerEmail;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedFolderTransferOwnershipDetails`
/// struct.
///
@interface DBTEAMLOGSharedFolderTransferOwnershipDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedFolderTransferOwnershipDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedFolderTransferOwnershipDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderTransferOwnershipDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGSharedFolderTransferOwnershipDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedFolderTransferOwnershipDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedFolderTransferOwnershipDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedFolderTransferOwnershipDetails` object.
///
+ (DBTEAMLOGSharedFolderTransferOwnershipDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
