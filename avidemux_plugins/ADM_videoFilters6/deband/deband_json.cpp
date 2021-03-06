// automatically generated by admSerialization.py, do not edit!
#include "ADM_default.h"
#include "ADM_paramList.h"
#include "ADM_coreJson.h"
#include "deband.h"
bool  deband_jserialize(const char *file, const deband *key){
admJson json;
json.addUint32("range",key->range);
json.addUint32("lumaThreshold",key->lumaThreshold);
json.addUint32("chromaThreshold",key->chromaThreshold);
return json.dumpToFile(file);
};
bool  deband_jdeserialize(const char *file, const ADM_paramList *tmpl,deband *key){
admJsonToCouple json;
CONFcouple *c=json.readFromFile(file);
if(!c) {ADM_error("Cannot read json file");return false;}
bool r= ADM_paramLoadPartial(c,tmpl,key);
delete c;
return r;
};
