// Generated by admPyClass.pl do not edit !
// videoCodecSetProfile -> int editor->setVideoCodecProfile(str str)
static tp_obj zzpy_videoCodecSetProfile(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  const char *p1 = pm.asString();
  int r = editor->setVideoCodecProfile(p0, p1);
  return tp_number(r);
}
// audioBitrate -> int pyGetAudioBitrate(IEditor int)
static tp_obj zzpy_audioBitrate(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyGetAudioBitrate(p0, p1);
  return tp_number(r);
}
// setPostProc -> int editor->setPostProc(int int int)
static tp_obj zzpy_setPostProc(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = editor->setPostProc(p0, p1, p2);
  return tp_number(r);
}
// setHDRConfig -> int editor->setHDRConfig(int double double)
static tp_obj zzpy_setHDRConfig(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  double p1 = pm.asDouble();
  double p2 = pm.asDouble();
  int r = editor->setHDRConfig(p0, p1, p2);
  return tp_number(r);
}
// audioGetResample -> int pyGetResample(IEditor int)
static tp_obj zzpy_audioGetResample(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyGetResample(p0, p1);
  return tp_number(r);
}
// getPARWidth -> int editor->getPARWidth(void)
static tp_obj zzpy_getPARWidth(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r = editor->getPARWidth();
  return tp_number(r);
}
// savePng -> int editor->saveImagePng(str)
static tp_obj zzpy_savePng(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->saveImagePng(p0);
  return tp_number(r);
}
// audioSetMixer -> int editor->setAudioMixer(int str)
static tp_obj zzpy_audioSetMixer(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  int r = editor->setAudioMixer(p0, p1);
  return tp_number(r);
}
// audioSetDrc -> int pySetDrc(IEditor int int)
static tp_obj zzpy_audioSetDrc(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = pySetDrc(p0, p1, p2);
  return tp_number(r);
}
// videoCodec -> int editor->setVideoCodec(str couples)
static tp_obj zzpy_videoCodec(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r = editor->setVideoCodec(p0, p1);
  return tp_number(r);
}
// audioEncoding -> int pyGetAudioEncoding(IEditor int)
static tp_obj zzpy_audioEncoding(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyGetAudioEncoding(p0, p1);
  return tp_number(r);
}
// addVideoFilter -> int editor->addVideoFilter(str couples)
static tp_obj zzpy_addVideoFilter(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r = editor->addVideoFilter(p0, p1);
  return tp_number(r);
}
// audioChannels -> int pyGetAudioChannels(IEditor int)
static tp_obj zzpy_audioChannels(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyGetAudioChannels(p0, p1);
  return tp_number(r);
}
// addSegment -> int editor->addSegment(int double double)
static tp_obj zzpy_addSegment(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  double p1 = pm.asDouble();
  double p2 = pm.asDouble();
  int r = editor->addSegment(p0, p1, p2);
  return tp_number(r);
}
// getFps1000 -> int pyGetFps1000(IEditor)
static tp_obj zzpy_getFps1000(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyGetFps1000(p0);
  return tp_number(r);
}
// audioTotalTracksCount -> int pyGetNumberOfAvailableAudioTracks(IEditor)
static tp_obj zzpy_audioTotalTracksCount(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyGetNumberOfAvailableAudioTracks(p0);
  return tp_number(r);
}
// save -> int editor->saveFile(str)
static tp_obj zzpy_save(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->saveFile(p0);
  return tp_number(r);
}
// audioAddExternal -> int pyAddExternal(IEditor str)
static tp_obj zzpy_audioAddExternal(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  const char *p1 = pm.asString();
  int r = pyAddExternal(p0, p1);
  return tp_number(r);
}
// audioSetNormalize -> int pySetNormalize(IEditor int int int)
static tp_obj zzpy_audioSetNormalize(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int p3 = pm.asInt();
  int r = pySetNormalize(p0, p1, p2, p3);
  return tp_number(r);
}
// setCurrentPts -> int editor->setCurrentFramePts(double)
static tp_obj zzpy_setCurrentPts(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  double p0 = pm.asDouble();
  int r = editor->setCurrentFramePts(p0);
  return tp_number(r);
}
// clearSegments -> int editor->clearSegment(void)
static tp_obj zzpy_clearSegments(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r = editor->clearSegment();
  return tp_number(r);
}
// audioFrequency -> int pyGetAudioFrequency(IEditor int)
static tp_obj zzpy_audioFrequency(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyGetAudioFrequency(p0, p1);
  return tp_number(r);
}
// audioAddTrack -> int pyAddAudioTrack(IEditor int)
static tp_obj zzpy_audioAddTrack(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int r = pyAddAudioTrack(p0, p1);
  return tp_number(r);
}
// videoCodecChangeParam -> int editor->changeVideoParam(str couples)
static tp_obj zzpy_videoCodecChangeParam(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r = editor->changeVideoParam(p0, p1);
  return tp_number(r);
}
// appendVideo -> int editor->appendFile(str)
static tp_obj zzpy_appendVideo(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->appendFile(p0);
  return tp_number(r);
}
// audioSetShift -> int pySetAudioShift(IEditor int int int)
static tp_obj zzpy_audioSetShift(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int p3 = pm.asInt();
  int r = pySetAudioShift(p0, p1, p2, p3);
  return tp_number(r);
}
// setSourceTrackLanguage -> int editor->audioSetAudioPoolLanguage(int str)
static tp_obj zzpy_setSourceTrackLanguage(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  int r = editor->audioSetAudioPoolLanguage(p0, p1);
  return tp_number(r);
}
// getPARHeight -> int editor->getPARHeight(void)
static tp_obj zzpy_getPARHeight(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int r = editor->getPARHeight();
  return tp_number(r);
}
// saveJpeg -> int editor->saveImageJpg(str)
static tp_obj zzpy_saveJpeg(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->saveImageJpg(p0);
  return tp_number(r);
}
// getOutputExtension -> str pyGetContainerEx(IEditor)
static tp_obj zzpy_getOutputExtension(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  char *r = pyGetContainerEx(p0);
  if(!r) return tp_None;

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
// audioSetResample -> int pySetResample(IEditor int int)
static tp_obj zzpy_audioSetResample(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = pySetResample(p0, p1, p2);
  return tp_number(r);
}
// seekKeyFrame -> int editor->seekKeyFrame(int)
static tp_obj zzpy_seekKeyFrame(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  int r = editor->seekKeyFrame(p0);
  return tp_number(r);
}
// audioSetNormalize2 -> int pySetNormalize2(IEditor int int int int)
static tp_obj zzpy_audioSetNormalize2(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int p3 = pm.asInt();
  int p4 = pm.asInt();
  int r = pySetNormalize2(p0, p1, p2, p3, p4);
  return tp_number(r);
}
// clearVideoFilters -> void editor->clearFilters(void)
static tp_obj zzpy_clearVideoFilters(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  editor->clearFilters();
  return tp_None;
}
// saveAudio -> int editor->saveAudio(int str)
static tp_obj zzpy_saveAudio(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  int r = editor->saveAudio(p0, p1);
  return tp_number(r);
}
// getHeight -> int pyGetHeight(IEditor)
static tp_obj zzpy_getHeight(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyGetHeight(p0);
  return tp_number(r);
}
// audioTracksCount -> int pyGetNumberOfAudioTracks(IEditor)
static tp_obj zzpy_audioTracksCount(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyGetNumberOfAudioTracks(p0);
  return tp_number(r);
}
// audioResetFilter -> void editor->resetAudioFilter(int)
static tp_obj zzpy_audioResetFilter(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  editor->resetAudioFilter(p0);
  return tp_None;
}
// getWidth -> int pyGetWidth(IEditor)
static tp_obj zzpy_getWidth(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyGetWidth(p0);
  return tp_number(r);
}
// setContainer -> int editor->setContainer(str couples)
static tp_obj zzpy_setContainer(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  CONFcouple *p1 = NULL;
  pm.makeCouples(&p1);
  int r = editor->setContainer(p0, p1);
  return tp_number(r);
}
// audioSetPal2Film -> int pySetPal2Film(IEditor int int)
static tp_obj zzpy_audioSetPal2Film(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = pySetPal2Film(p0, p1, p2);
  return tp_number(r);
}
// saveBmp -> int editor->saveImageBmp(str)
static tp_obj zzpy_saveBmp(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->saveImageBmp(p0);
  return tp_number(r);
}
// seekFrame -> int editor->seekFrame(int)
static tp_obj zzpy_seekFrame(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  int r = editor->seekFrame(p0);
  return tp_number(r);
}
// getVideoCodec -> str editor->getVideoCodec(void)
static tp_obj zzpy_getVideoCodec(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  char *r = editor->getVideoCodec();
  if(!r) return tp_None;

  tp_obj o = tp_string_copy(tp, r, strlen(r));
  ADM_dealloc(r);
  return o;
}
// audioClearTracks -> int pyClearAudioTracks(IEditor)
static tp_obj zzpy_audioClearTracks(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int r = pyClearAudioTracks(p0);
  return tp_number(r);
}
// loadVideo -> int editor->openFile(str)
static tp_obj zzpy_loadVideo(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  const char *p0 = pm.asString();
  int r = editor->openFile(p0);
  return tp_number(r);
}
// audioCodec -> int editor->setAudioCodec(int str couples)
static tp_obj zzpy_audioCodec(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  int p0 = pm.asInt();
  const char *p1 = pm.asString();
  CONFcouple *p2 = NULL;
  pm.makeCouples(&p2);
  int r = editor->setAudioCodec(p0, p1, p2);
  return tp_number(r);
}
// audioSetFilm2Pal -> int pySetFilm2Pal(IEditor int int)
static tp_obj zzpy_audioSetFilm2Pal(TP)
{
  tp_obj self = tp_getraw(tp);
  IScriptEngine *engine = (IScriptEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(tp);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);

  IEditor *p0 = editor;
  int p1 = pm.asInt();
  int p2 = pm.asInt();
  int r = pySetFilm2Pal(p0, p1, p2);
  return tp_number(r);
}
tp_obj zzpy__pyAdm_get(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);
  char const *key = pm.asString();
  if (!strcmp(key, "markerB"))
  {
     return tp_number(editor->getMarkerBPts());
  }
  if (!strcmp(key, "markerA"))
  {
     return tp_number(editor->getMarkerAPts());
  }
  if (!strcmp(key, "videoCodecSetProfile"))
  {
    return tp_method(vm, self, zzpy_videoCodecSetProfile);
  }
  if (!strcmp(key, "audioBitrate"))
  {
    return tp_method(vm, self, zzpy_audioBitrate);
  }
  if (!strcmp(key, "setPostProc"))
  {
    return tp_method(vm, self, zzpy_setPostProc);
  }
  if (!strcmp(key, "setHDRConfig"))
  {
    return tp_method(vm, self, zzpy_setHDRConfig);
  }
  if (!strcmp(key, "audioGetResample"))
  {
    return tp_method(vm, self, zzpy_audioGetResample);
  }
  if (!strcmp(key, "getPARWidth"))
  {
    return tp_method(vm, self, zzpy_getPARWidth);
  }
  if (!strcmp(key, "savePng"))
  {
    return tp_method(vm, self, zzpy_savePng);
  }
  if (!strcmp(key, "audioSetMixer"))
  {
    return tp_method(vm, self, zzpy_audioSetMixer);
  }
  if (!strcmp(key, "audioSetDrc"))
  {
    return tp_method(vm, self, zzpy_audioSetDrc);
  }
  if (!strcmp(key, "videoCodec"))
  {
    return tp_method(vm, self, zzpy_videoCodec);
  }
  if (!strcmp(key, "audioEncoding"))
  {
    return tp_method(vm, self, zzpy_audioEncoding);
  }
  if (!strcmp(key, "addVideoFilter"))
  {
    return tp_method(vm, self, zzpy_addVideoFilter);
  }
  if (!strcmp(key, "audioChannels"))
  {
    return tp_method(vm, self, zzpy_audioChannels);
  }
  if (!strcmp(key, "addSegment"))
  {
    return tp_method(vm, self, zzpy_addSegment);
  }
  if (!strcmp(key, "getFps1000"))
  {
    return tp_method(vm, self, zzpy_getFps1000);
  }
  if (!strcmp(key, "audioTotalTracksCount"))
  {
    return tp_method(vm, self, zzpy_audioTotalTracksCount);
  }
  if (!strcmp(key, "save"))
  {
    return tp_method(vm, self, zzpy_save);
  }
  if (!strcmp(key, "audioAddExternal"))
  {
    return tp_method(vm, self, zzpy_audioAddExternal);
  }
  if (!strcmp(key, "audioSetNormalize"))
  {
    return tp_method(vm, self, zzpy_audioSetNormalize);
  }
  if (!strcmp(key, "setCurrentPts"))
  {
    return tp_method(vm, self, zzpy_setCurrentPts);
  }
  if (!strcmp(key, "clearSegments"))
  {
    return tp_method(vm, self, zzpy_clearSegments);
  }
  if (!strcmp(key, "audioFrequency"))
  {
    return tp_method(vm, self, zzpy_audioFrequency);
  }
  if (!strcmp(key, "audioAddTrack"))
  {
    return tp_method(vm, self, zzpy_audioAddTrack);
  }
  if (!strcmp(key, "videoCodecChangeParam"))
  {
    return tp_method(vm, self, zzpy_videoCodecChangeParam);
  }
  if (!strcmp(key, "appendVideo"))
  {
    return tp_method(vm, self, zzpy_appendVideo);
  }
  if (!strcmp(key, "audioSetShift"))
  {
    return tp_method(vm, self, zzpy_audioSetShift);
  }
  if (!strcmp(key, "setSourceTrackLanguage"))
  {
    return tp_method(vm, self, zzpy_setSourceTrackLanguage);
  }
  if (!strcmp(key, "getPARHeight"))
  {
    return tp_method(vm, self, zzpy_getPARHeight);
  }
  if (!strcmp(key, "saveJpeg"))
  {
    return tp_method(vm, self, zzpy_saveJpeg);
  }
  if (!strcmp(key, "getOutputExtension"))
  {
    return tp_method(vm, self, zzpy_getOutputExtension);
  }
  if (!strcmp(key, "audioSetResample"))
  {
    return tp_method(vm, self, zzpy_audioSetResample);
  }
  if (!strcmp(key, "seekKeyFrame"))
  {
    return tp_method(vm, self, zzpy_seekKeyFrame);
  }
  if (!strcmp(key, "audioSetNormalize2"))
  {
    return tp_method(vm, self, zzpy_audioSetNormalize2);
  }
  if (!strcmp(key, "clearVideoFilters"))
  {
    return tp_method(vm, self, zzpy_clearVideoFilters);
  }
  if (!strcmp(key, "saveAudio"))
  {
    return tp_method(vm, self, zzpy_saveAudio);
  }
  if (!strcmp(key, "getHeight"))
  {
    return tp_method(vm, self, zzpy_getHeight);
  }
  if (!strcmp(key, "audioTracksCount"))
  {
    return tp_method(vm, self, zzpy_audioTracksCount);
  }
  if (!strcmp(key, "audioResetFilter"))
  {
    return tp_method(vm, self, zzpy_audioResetFilter);
  }
  if (!strcmp(key, "getWidth"))
  {
    return tp_method(vm, self, zzpy_getWidth);
  }
  if (!strcmp(key, "setContainer"))
  {
    return tp_method(vm, self, zzpy_setContainer);
  }
  if (!strcmp(key, "audioSetPal2Film"))
  {
    return tp_method(vm, self, zzpy_audioSetPal2Film);
  }
  if (!strcmp(key, "saveBmp"))
  {
    return tp_method(vm, self, zzpy_saveBmp);
  }
  if (!strcmp(key, "seekFrame"))
  {
    return tp_method(vm, self, zzpy_seekFrame);
  }
  if (!strcmp(key, "getVideoCodec"))
  {
    return tp_method(vm, self, zzpy_getVideoCodec);
  }
  if (!strcmp(key, "audioClearTracks"))
  {
    return tp_method(vm, self, zzpy_audioClearTracks);
  }
  if (!strcmp(key, "loadVideo"))
  {
    return tp_method(vm, self, zzpy_loadVideo);
  }
  if (!strcmp(key, "audioCodec"))
  {
    return tp_method(vm, self, zzpy_audioCodec);
  }
  if (!strcmp(key, "audioSetFilm2Pal"))
  {
    return tp_method(vm, self, zzpy_audioSetFilm2Pal);
  }
  return tp_get(vm, self, tp_string(key));
}
tp_obj zzpy__pyAdm_set(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  IScriptEngine *engine = (IScriptEngine*)tp_get(vm, vm->builtins, tp_string("userdata")).data.val;
  IEditor *editor = engine->editor();
  TinyParams pm(vm);
  void *me = (void *)pm.asThis(&self, ADM_PYID_AVIDEMUX);
  char const *key = pm.asString();
  if (!strcmp(key, "markerB"))
  {
     double val = pm.asDouble();
     editor->setMarkerBPts(val);
     return tp_None;
  }
  if (!strcmp(key, "markerA"))
  {
     double val = pm.asDouble();
     editor->setMarkerAPts(val);
     return tp_None;
  }
  return tp_None;
}
// Dctor
static void myDtorpyAdm(tp_vm *vm,tp_obj self)
{
}
// Ctor ()
static tp_obj myCtorpyAdm(tp_vm *vm)
{
  tp_obj self = tp_getraw(vm);
  TinyParams pm(vm);
  void *me = NULL;
  tp_obj cdata = tp_data(vm, ADM_PYID_AVIDEMUX, me);
  cdata.data.info->xfree = myDtorpyAdm;
  tp_set(vm, self, tp_string("cdata"), cdata);
  return tp_None;
}
static tp_obj zzpy__pyAdm_help(TP)
{
  PythonEngine *engine = (PythonEngine*)tp_get(tp, tp->builtins, tp_string("userdata")).data.val;

  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "videoCodecSetProfile(str,str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioBitrate(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "setPostProc(int,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "setHDRConfig(int,double,double)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioGetResample(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getPARWidth(void)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "savePng(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetMixer(int,str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetDrc(IEditor,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "videoCodec(str,couples)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioEncoding(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "addVideoFilter(str,couples)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioChannels(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "addSegment(int,double,double)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getFps1000(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioTotalTracksCount(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "save(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioAddExternal(IEditor,str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetNormalize(IEditor,int,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "setCurrentPts(double)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "clearSegments(void)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioFrequency(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioAddTrack(IEditor,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "videoCodecChangeParam(str,couples)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "appendVideo(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetShift(IEditor,int,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "setSourceTrackLanguage(int,str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getPARHeight(void)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "saveJpeg(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getOutputExtension(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetResample(IEditor,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "seekKeyFrame(int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetNormalize2(IEditor,int,int,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "clearVideoFilters(void)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "saveAudio(int,str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getHeight(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioTracksCount(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioResetFilter(int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getWidth(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "setContainer(str,couples)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetPal2Film(IEditor,int,int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "saveBmp(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "seekFrame(int)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "getVideoCodec(void)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioClearTracks(IEditor)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "loadVideo(str)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioCodec(int,str,couples)\n");
  engine->callEventHandlers(IScriptEngine::Information, NULL, -1, "audioSetFilm2Pal(IEditor,int,int)\n");

  return tp_None;
}
tp_obj initClasspyAdm(tp_vm *vm)
{
  tp_obj myClass = tp_class(vm);
  tp_set(vm,myClass, tp_string("__init__"), tp_fnc(vm,myCtorpyAdm));
  tp_set(vm,myClass, tp_string("__set__"), tp_fnc(vm,zzpy__pyAdm_set));
  tp_set(vm,myClass, tp_string("__get__"), tp_fnc(vm,zzpy__pyAdm_get));
  tp_set(vm,myClass, tp_string("help"), tp_fnc(vm,zzpy__pyAdm_help));
  return myClass;
}
