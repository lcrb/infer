/*
 * Copyright (c) 2016 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */
open! IStd;

let () =
  switch (Array.to_list Sys.argv) {
  | [prog, ...args] => ClangWrapper.exe ::prog ::args
  | [] => assert false /* Sys.argv is never empty */
  };
