// Copyright 2013 The Flutter Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Flutter/Flutter.h>
#import <PhotosUI/PhotosUI.h>


// typedef void (^ImagePickerResult)(id _Nullable imageResult);


@interface FLTImagePickerPlugin : NSObject <FlutterPlugin>

// For testing only.
- (UIImagePickerController *)getImagePickerController;
- (UIViewController *)viewControllerWithWindow:(UIWindow *)window;

@end
