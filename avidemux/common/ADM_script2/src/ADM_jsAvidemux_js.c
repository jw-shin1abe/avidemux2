/*
--- DO NOT EDIT THIS FILE !!! ---

This file has been generated automatically with 'jsapigen'.

jsapigen is a glue-code generator for SpiderMonkey. It is distributed
under the conditions of version 3 of the GNU General Public License.
Please have a look at http://jsapigen.sourceforge.net.

This file is NOT part of jsapigen and is NOT necessarily covered by
jsapigen's license. For licensing information regarding this file,
please refer to the software package which it is part of.

*/

#include "stdio.h"
#include "ADM_jsAvidemux.h"
void jsAvidemux(void)
{
        printf("Constructor invoked\n");
}

#include <string.h>
#include <wchar.h>
#include <jsapi.h>
#ifndef JS_THREADSAFE
#if JS_VERSION <= 170
#define jsrefcount int
#define JS_BeginRequest(cx)
#define JS_EndRequest(cx)
#define JS_SuspendRequest(cx)
#define JS_ResumeRequest(cx, saveDepth)
#endif
#endif
#ifndef JS_FS
#define JS_FS(name, call, nargs, flags, extra) {name, call, nargs, flags, extra}
#endif
#ifndef JS_FS_END
#define JS_FS_END {NULL, NULL, 0, 0, 0}
#endif
static JSPropertySpec jj_static_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jj_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jj_static_fs[] = {
    JS_FS_END
};
static JSFunctionSpec jj_fs[] = {
    JS_FS_END
};
static JSBool
jjadmloadVideo(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var2;
    char *var7;
    int var3;
    int var6;
    int var8;
    jsval var9;
    JSString *var10;
    jsval var138;
    size_t var11;
    size_t var12;
    int var14;
    jschar *var13;
    jsval var139;
    jsval var15;
    JSBool var1;
    var2 = NULL;
    var7 = NULL;
    var3 = 0;
    var6 = 0;
    var8 = 0;
    var9 = JSVAL_NULL;
    var10 = NULL;
    var138 = JSVAL_NULL;
    var11 = 0;
    var12 = 0;
    var14 = 0;
    var13 = NULL;
    var139 = JSVAL_NULL;
    var15 = JSVAL_NULL;
    var1 = JS_FALSE;
    var2 = obj;
    var6 = argc;
    var8 = 0;
    var8 = var8 < var6;
    if (var8) {
    var9 = argv[0];
    var10 = JS_ValueToString(cx, var9);
    if (!var10) {
        goto do_return;
    }
    var138 = STRING_TO_JSVAL(var10);
    argv[argc+0] = var138;
    var11 = JS_GetStringLength(var10);
    var12 = 1;
    var12 += var11;
    var7 = JS_malloc(cx, var12);
    if (!var7) {
        goto do_return;
    }
    var14 = 1;
    var13 = JS_GetStringChars(var10);
    var139 = STRING_TO_JSVAL(var10);
    argv[argc+1] = var139;
    {
        size_t i;
        for (i = 0; i < var11; ++i) {
            var7[i] = wctob(var13[i]);
        }
        var7[var11] = '\0';
    }
    }
    var3 = jsLoadVideo(var7);
    if (JS_NewNumberValue(cx, var3, &var15) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var15;
    if (rval) {
        *rval = var15;
    }
    var1 = JS_TRUE;
    do_return:
    if (var14) {
        JS_free(cx, var7);
        var7 = NULL;
        var14 = 0;
    }
    return var1;
}
static JSBool
jjadmclearSegments(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var17;
    int var18;
    int var21;
    jsval var22;
    JSBool var16;
    var17 = NULL;
    var18 = 0;
    var21 = 0;
    var22 = JSVAL_NULL;
    var16 = JS_FALSE;
    var17 = obj;
    var21 = argc;
    var18 = jsClearSegments();
    if (JS_NewNumberValue(cx, var18, &var22) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var22;
    if (rval) {
        *rval = var22;
    }
    var16 = JS_TRUE;
    do_return:
    return var16;
}
static JSBool
jjadmappendVideo(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var24;
    char *var29;
    int var25;
    int var28;
    int var30;
    jsval var31;
    JSString *var32;
    jsval var142;
    size_t var33;
    size_t var34;
    int var36;
    jschar *var35;
    jsval var143;
    jsval var37;
    JSBool var23;
    var24 = NULL;
    var29 = NULL;
    var25 = 0;
    var28 = 0;
    var30 = 0;
    var31 = JSVAL_NULL;
    var32 = NULL;
    var142 = JSVAL_NULL;
    var33 = 0;
    var34 = 0;
    var36 = 0;
    var35 = NULL;
    var143 = JSVAL_NULL;
    var37 = JSVAL_NULL;
    var23 = JS_FALSE;
    var24 = obj;
    var28 = argc;
    var30 = 0;
    var30 = var30 < var28;
    if (var30) {
    var31 = argv[0];
    var32 = JS_ValueToString(cx, var31);
    if (!var32) {
        goto do_return;
    }
    var142 = STRING_TO_JSVAL(var32);
    argv[argc+0] = var142;
    var33 = JS_GetStringLength(var32);
    var34 = 1;
    var34 += var33;
    var29 = JS_malloc(cx, var34);
    if (!var29) {
        goto do_return;
    }
    var36 = 1;
    var35 = JS_GetStringChars(var32);
    var143 = STRING_TO_JSVAL(var32);
    argv[argc+1] = var143;
    {
        size_t i;
        for (i = 0; i < var33; ++i) {
            var29[i] = wctob(var35[i]);
        }
        var29[var33] = '\0';
    }
    }
    var25 = jsAppendVideo(var29);
    if (JS_NewNumberValue(cx, var25, &var37) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+2] = var37;
    if (rval) {
        *rval = var37;
    }
    var23 = JS_TRUE;
    do_return:
    if (var36) {
        JS_free(cx, var29);
        var29 = NULL;
        var36 = 0;
    }
    return var23;
}
static JSBool
jjadmaddSegment(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var39;
    int var44;
    double var45;
    double var46;
    int var40;
    int var43;
    int var47;
    jsval var48;
    int32 var49;
    int var50;
    jsval var51;
    jsdouble var52;
    int var53;
    jsval var54;
    jsdouble var55;
    jsval var56;
    JSBool var38;
    var39 = NULL;
    var44 = 0;
    var45 = 0.0;
    var46 = 0.0;
    var40 = 0;
    var43 = 0;
    var47 = 0;
    var48 = JSVAL_NULL;
    var49 = 0;
    var50 = 0;
    var51 = JSVAL_NULL;
    var52 = 0.0;
    var53 = 0;
    var54 = JSVAL_NULL;
    var55 = 0.0;
    var56 = JSVAL_NULL;
    var38 = JS_FALSE;
    var39 = obj;
    var43 = argc;
    var47 = 0;
    var47 = var47 < var43;
    if (var47) {
    var48 = argv[0];
    if (JS_ValueToInt32(cx, var48, &var49) != JS_TRUE) {
        goto do_return;
    }
    var44 = (int)var49;
    }
    var50 = 1;
    var50 = var50 < var43;
    if (var50) {
    var51 = argv[1];
    if (JS_ValueToNumber(cx, var51, &var52) != JS_TRUE) {
        goto do_return;
    }
    var45 = (double)var52;
    }
    var53 = 2;
    var53 = var53 < var43;
    if (var53) {
    var54 = argv[2];
    if (JS_ValueToNumber(cx, var54, &var55) != JS_TRUE) {
        goto do_return;
    }
    var46 = (double)var55;
    }
    var40 = jsAddSegment(var44, var45, var46);
    if (JS_NewNumberValue(cx, var40, &var56) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var56;
    if (rval) {
        *rval = var56;
    }
    var38 = JS_TRUE;
    do_return:
    return var38;
}
static JSBool
jjadmsetPostProc(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var58;
    int var63;
    int var64;
    int var65;
    int var59;
    int var62;
    int var66;
    jsval var67;
    int32 var68;
    int var69;
    jsval var70;
    int32 var71;
    int var72;
    jsval var73;
    int32 var74;
    jsval var75;
    JSBool var57;
    var58 = NULL;
    var63 = 0;
    var64 = 0;
    var65 = 0;
    var59 = 0;
    var62 = 0;
    var66 = 0;
    var67 = JSVAL_NULL;
    var68 = 0;
    var69 = 0;
    var70 = JSVAL_NULL;
    var71 = 0;
    var72 = 0;
    var73 = JSVAL_NULL;
    var74 = 0;
    var75 = JSVAL_NULL;
    var57 = JS_FALSE;
    var58 = obj;
    var62 = argc;
    var66 = 0;
    var66 = var66 < var62;
    if (var66) {
    var67 = argv[0];
    if (JS_ValueToInt32(cx, var67, &var68) != JS_TRUE) {
        goto do_return;
    }
    var63 = (int)var68;
    }
    var69 = 1;
    var69 = var69 < var62;
    if (var69) {
    var70 = argv[1];
    if (JS_ValueToInt32(cx, var70, &var71) != JS_TRUE) {
        goto do_return;
    }
    var64 = (int)var71;
    }
    var72 = 2;
    var72 = var72 < var62;
    if (var72) {
    var73 = argv[2];
    if (JS_ValueToInt32(cx, var73, &var74) != JS_TRUE) {
        goto do_return;
    }
    var65 = (int)var74;
    }
    var59 = jsSetPostProc(var63, var64, var65);
    if (JS_NewNumberValue(cx, var59, &var75) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+0] = var75;
    if (rval) {
        *rval = var75;
    }
    var57 = JS_TRUE;
    do_return:
    return var57;
}
static JSBool
jjadmvideoCodec(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var77;
    char *var82;
    char **var83;
    int var78;
    int var81;
    int var84;
    jsval var85;
    JSString *var86;
    jsval var147;
    size_t var87;
    size_t var88;
    int var90;
    jschar *var89;
    jsval var148;
    int var91;
    jsval var92;
    JSObject *var93;
    jsval var149;
    jsuint var94;
    char **var96;
    size_t var97;
    int var123;
    size_t var98;
    JSString *var99;
    size_t var100;
    JSString **var106;
    int var124;
    jsuint var101;
    jsint var102;
    JSBool var103;
    jsval var104;
    JSString *var105;
    jsval var150;
    size_t var109;
    jsuint var107;
    jsint var108;
    JSString *var111;
    size_t var110;
    size_t var112;
    char var121;
    size_t var122;
    char *var113;
    int var125;
    char *var114;
    size_t var115;
    int var126;
    char *var118;
    jsuint var116;
    jsint var117;
    JSString *var120;
    size_t var119;
    size_t var127;
    size_t var128;
    int var130;
    jschar *var129;
    jsval var151;
    jsval var131;
    JSBool var76;
    var77 = NULL;
    var82 = NULL;
    var83 = NULL;
    var78 = 0;
    var81 = 0;
    var84 = 0;
    var85 = JSVAL_NULL;
    var86 = NULL;
    var147 = JSVAL_NULL;
    var87 = 0;
    var88 = 0;
    var90 = 0;
    var89 = NULL;
    var148 = JSVAL_NULL;
    var91 = 0;
    var92 = JSVAL_NULL;
    var93 = NULL;
    var149 = JSVAL_NULL;
    var94 = 0;
    var96 = NULL;
    var97 = 0;
    var123 = 0;
    var98 = 0;
    var99 = NULL;
    var100 = 0;
    var106 = NULL;
    var124 = 0;
    var101 = 0;
    var102 = 0;
    var103 = JS_FALSE;
    var104 = JSVAL_NULL;
    var105 = NULL;
    var150 = JSVAL_NULL;
    var109 = 0;
    var107 = 0;
    var108 = 0;
    var111 = NULL;
    var110 = 0;
    var112 = 0;
    var121 = 0;
    var122 = 0;
    var113 = NULL;
    var125 = 0;
    var114 = NULL;
    var115 = 0;
    var126 = 0;
    var118 = NULL;
    var116 = 0;
    var117 = 0;
    var120 = NULL;
    var119 = 0;
    var127 = 0;
    var128 = 0;
    var130 = 0;
    var129 = NULL;
    var151 = JSVAL_NULL;
    var131 = JSVAL_NULL;
    var76 = JS_FALSE;
    var77 = obj;
    var81 = argc;
    var84 = 0;
    var84 = var84 < var81;
    if (var84) {
    var85 = argv[0];
    var86 = JS_ValueToString(cx, var85);
    if (!var86) {
        goto do_return;
    }
    var147 = STRING_TO_JSVAL(var86);
    argv[argc+0] = var147;
    var87 = JS_GetStringLength(var86);
    var88 = 1;
    var88 += var87;
    var82 = JS_malloc(cx, var88);
    if (!var82) {
        goto do_return;
    }
    var90 = 1;
    var89 = JS_GetStringChars(var86);
    var148 = STRING_TO_JSVAL(var86);
    argv[argc+1] = var148;
    {
        size_t i;
        for (i = 0; i < var87; ++i) {
            var82[i] = wctob(var89[i]);
        }
        var82[var87] = '\0';
    }
    }
    var91 = 1;
    var91 = var91 < var81;
    if (var91) {
    var92 = argv[1];
    if (JS_ValueToObject(cx, var92, &var93) != JS_TRUE) {
        goto do_return;
    }
    var149 = OBJECT_TO_JSVAL(var93);
    argv[argc+2] = var149;
    if (JS_GetArrayLength(cx, var93, &var94) != JS_TRUE) {
        goto do_return;
    }
    var97 = sizeof(var96);
    var97 *= var94;
    var83 = JS_malloc(cx, var97);
    if (!var83) {
        goto do_return;
    }
    var123 = 1;
    var98 = var94;
    var100 = sizeof(var99);
    var98 *= var100;
    var106 = JS_malloc(cx, var98);
    if (!var106) {
        goto do_return;
    }
    var124 = 1;
    var101 = var94;
    var102 = -1;
    while (var101)
    {
    var101 += var102;
    var103 = JS_GetElement(cx, var93, var101, &var104);
    var105 = JS_ValueToString(cx, var104);
    if (!var105) {
        goto do_return;
    }
    var150 = STRING_TO_JSVAL(var105);
    argv[argc+3] = var150;
    var106[var101] = var105;
    }
    var109 = 0;
    var107 = var94;
    var108 = -1;
    while (var107)
    {
    var107 += var108;
    var111 = var106[var107];
    var110 = JS_GetStringLength(var111);
    var109 += var110;
    var112 = 1;
    var109 += var112;
    }
    var122 = sizeof(var121);
    var122 *= var109;
    var113 = JS_malloc(cx, var122);
    if (!var113) {
        goto do_return;
    }
    var125 = 1;
    var115 = sizeof(var114);
    var115 *= var94;
    var83 = JS_malloc(cx, var115);
    if (!var83) {
        goto do_return;
    }
    var126 = 1;
    var118 = var113;
    var118 += var109;
    var116 = var94;
    var117 = -1;
    while (var116)
    {
    var116 += var117;
    var120 = var106[var116];
    var119 = JS_GetStringLength(var120);
    var118 -= var119;
    var118 += var117;
    var127 = JS_GetStringLength(var120);
    var128 = 1;
    var128 += var127;
    var118 = JS_malloc(cx, var128);
    if (!var118) {
        goto do_return;
    }
    var130 = 1;
    var129 = JS_GetStringChars(var120);
    var151 = STRING_TO_JSVAL(var120);
    argv[argc+4] = var151;
    {
        size_t i;
        for (i = 0; i < var127; ++i) {
            var118[i] = wctob(var129[i]);
        }
        var118[var127] = '\0';
    }
    var83[var116] = var118;
    }
    }
    var78 = jsVideoCodec(var82, var83);
    if (JS_NewNumberValue(cx, var78, &var131) != JS_TRUE) {
        goto do_return;
    }
    argv[argc+5] = var131;
    if (rval) {
        *rval = var131;
    }
    var76 = JS_TRUE;
    do_return:
    if (var130) {
        JS_free(cx, var118);
        var118 = NULL;
        var130 = 0;
    }
    if (var126) {
        JS_free(cx, var83);
        var83 = NULL;
        var126 = 0;
    }
    if (var125) {
        JS_free(cx, var113);
        var113 = NULL;
        var125 = 0;
    }
    if (var124) {
        JS_free(cx, var106);
        var106 = NULL;
        var124 = 0;
    }
    if (var123) {
        JS_free(cx, var83);
        var83 = NULL;
        var123 = 0;
    }
    if (var90) {
        JS_free(cx, var82);
        var82 = NULL;
        var90 = 0;
    }
    return var76;
}
static JSBool
jjadm__construct__(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var133;
    int var137;
    JSBool var132;
    var133 = NULL;
    var137 = 0;
    var132 = JS_FALSE;
    var133 = obj;
    var137 = argc;
    jsAvidemux();
    var132 = JS_TRUE;
    return var132;
}
static JSPropertySpec jjadm_static_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jjadm_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jjadm_static_fs[] = {
    JS_FS("loadVideo", jjadmloadVideo, 1, 0, 3),
    JS_FS("clearSegments", jjadmclearSegments, 0, 0, 1),
    JS_FS("appendVideo", jjadmappendVideo, 1, 0, 3),
    JS_FS("addSegment", jjadmaddSegment, 3, 0, 1),
    JS_FS("setPostProc", jjadmsetPostProc, 3, 0, 1),
    JS_FS("videoCodec", jjadmvideoCodec, 2, 0, 6),
    JS_FS_END
};
static JSFunctionSpec jjadm_fs[] = {
    JS_FS_END
};
static JSClass jjadm_class = {
    "adm",
    0,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_PropertyStub,
    JS_EnumerateStub,
    JS_ResolveStub,
    JS_ConvertStub,
    JS_FinalizeStub,
    NULL,
    NULL,
    NULL,
    jjadm__construct__,
    NULL,
    NULL,
    NULL,
    NULL
};
static JSObject *
jjadm_init(JSContext *cx, JSObject *obj)
{
    JSObject *parent_proto, *proto;
    JSClass *class;
    if (!cx || !obj) {
        JS_ReportError(cx, "invalid parameter");
        return NULL;
    }
    if (!JS_EnterLocalRootScope(cx)) {
        JS_ReportError(cx, "JS_EnterLocalRootScope failed");
        return NULL;
    }
    parent_proto = NULL;
    proto = NULL;
    parent_proto = JS_NewObject(cx, NULL, NULL, NULL);
    if (!parent_proto) {
        JS_LeaveLocalRootScope(cx);
        JS_ReportError(cx, "failed to create prototype");
        return NULL;
    }
    class = &jjadm_class;
    proto = JS_InitClass(cx, obj, parent_proto, class, jjadm__construct__, 0, jjadm_ps, jjadm_fs, jjadm_static_ps, jjadm_static_fs);
    if (!proto) {
        JS_LeaveLocalRootScope(cx);
        JS_ReportError(cx, "failed to init class");
        return NULL;
    }
    JS_LeaveLocalRootScope(cx);
    return proto;
}


JSObject *jsAvidemuxInit(JSContext *cx,JSObject *obj)
{
          if (JS_DefineFunctions(cx, obj, jj_static_fs) != JS_TRUE) 
          {
                return NULL;
          }
          return jjadm_init(cx,obj);
}

