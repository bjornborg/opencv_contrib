/*M///////////////////////////////////////////////////////////////////////////////////////
//
//  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.
//
//  By downloading, copying, installing or using the software you agree to this license.
//  If you do not agree to this license, do not download, install,
//  copy or use the software.
//
//
//                          License Agreement
//                For Open Source Computer Vision Library
//
// Copyright (C) 2000-2008, Intel Corporation, all rights reserved.
// Copyright (C) 2009, Willow Garage Inc., all rights reserved.
// Copyright (C) 2013, OpenCV Foundation, all rights reserved.
// Third party copyrights are property of their respective owners.
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
//   * Redistribution's of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//
//   * Redistribution's in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//   * The name of the copyright holders may not be used to endorse or promote products
//     derived from this software without specific prior written permission.
//
// This software is provided by the copyright holders and contributors "as is" and
// any express or implied warranties, including, but not limited to, the implied
// warranties of merchantability and fitness for a particular purpose are disclaimed.
// In no event shall the Intel Corporation or contributors be liable for any direct,
// indirect, incidental, special, exemplary, or consequential damages
// (including, but not limited to, procurement of substitute goods or services;
// loss of use, data, or profits; or business interruption) however caused
// and on any theory of liability, whether in contract, strict liability,
// or tort (including negligence or otherwise) arising in any way out of
// the use of this software, even if advised of the possibility of such damage.
//
//M*/

#ifndef OPENCV_PRECOMP_H
#define OPENCV_PRECOMP_H

#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <stdexcept>
#include <utility>

#include "opencv2/core/private.cuda.hpp"
#include "opencv2/cudacodec.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/videoio/registry.hpp"
#include <opencv2/core/utils/logger.hpp>

#ifdef HAVE_NVCUVID
#if defined(HAVE_DYNLINK_NVCUVID_HEADER)
#include <dynlink_nvcuvid.h>
#elif defined(HAVE_NVCUVID_HEADER)
#include <nvcuvid.h>
#endif

#ifdef _WIN32
#define NOMINMAX
#include <windows.h>
#ifdef HAVE_NVCUVENC
// #include "NvEncoderCuda.h"
#include <NVEncoderAPI.h>
#endif
#else
#include <pthread.h>
#include <unistd.h>
#endif

#include "cuvid_video_source.hpp"
#include "ffmpeg_video_source.hpp"
#include "frame_queue.hpp"
#include "thread.hpp"
#include "video_decoder.hpp"
#include "video_parser.hpp"
#include "video_source.hpp"

#endif

#endif /* OPENCV_PRECOMP_H */
