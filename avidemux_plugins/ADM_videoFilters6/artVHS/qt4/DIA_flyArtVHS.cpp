/**/
/***************************************************************************
                          DIA_ArtVHS
                             -------------------

    begin                : 08 Apr 2005
    copyright            : (C) 2004/7 by mean
    email                : fixounet@free.fr
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#include "DIA_flyDialogQt4.h"
#include "ADM_default.h"
#include "ADM_image.h"
#include "DIA_flyArtVHS.h"
#include "ADM_vidArtVHS.h"

/************* COMMON PART *********************/
uint8_t  flyArtVHS::update(void)
{
    return 1;
}
/**
    \fn processYuv
*/
uint8_t   flyArtVHS::processYuv(ADMImage *in,ADMImage *out )
{
    out->duplicate(in);

    // Do it!
    ADMVideoArtVHS::ArtVHSProcess_C(out, param.lumaBW, param.chromaBW, param.unSync, param.unSyncFilter, param.lumaNoDelay, param.chromaNoDelay, param.noise, noiseBuffer4k);
    return 1;
}

