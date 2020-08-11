/***************************************************************************
    copyright            : (C) 2007 by mean
    email                : fixounet@free.fr

      See lavformat/flv[dec/env].c for detail
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include "ADM_default.h"
#include "ADM_muxerInternal.h"
#include "muxerMP4.h"

#include "fourcc.h"
#include "mp4_muxer_desc.cpp"

#ifdef MUXER_IS_MOV
extern bool movConfigure(void);
#else
extern bool mp4Configure(void);
#endif

ADM_MUXER_BEGIN(
#ifdef MUXER_IS_MOV
        "mov",muxerMov,
        1,0,0,
        "MOV",           // Internal name
        "MOV muxer plugin (c) Mean 2009",
        "MOV Muxer",     // Display name
        movConfigure,    // configure function
#else
        "mp4",muxerMP4,
        1,0,0,
        "MP4",           // Internal name
        "MP4 muxer plugin (c) Mean 2009",
        "MP4 Muxer",     // Display name
        mp4Configure,    // configure function
#endif
        mp4_muxer_param, // Template
        &muxerConfig,    // conf
        sizeof(mp4_muxer));

