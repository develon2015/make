#ifndef KONAN_LIBDYNAMIC_H
#define KONAN_LIBDYNAMIC_H
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
typedef bool            libdynamic_KBoolean;
#else
typedef _Bool           libdynamic_KBoolean;
#endif
typedef unsigned short     libdynamic_KChar;
typedef signed char        libdynamic_KByte;
typedef short              libdynamic_KShort;
typedef int                libdynamic_KInt;
typedef long long          libdynamic_KLong;
typedef unsigned char      libdynamic_KUByte;
typedef unsigned short     libdynamic_KUShort;
typedef unsigned int       libdynamic_KUInt;
typedef unsigned long long libdynamic_KULong;
typedef float              libdynamic_KFloat;
typedef double             libdynamic_KDouble;
typedef void*              libdynamic_KNativePtr;
struct libdynamic_KType;
typedef struct libdynamic_KType libdynamic_KType;

typedef struct {
  libdynamic_KNativePtr pinned;
} libdynamic_kref_User;
typedef struct {
  libdynamic_KNativePtr pinned;
} libdynamic_kref_kotlin_Any;


typedef struct {
  /* Service functions. */
  void (*DisposeStablePointer)(libdynamic_KNativePtr ptr);
  void (*DisposeString)(const char* string);
  libdynamic_KBoolean (*IsInstance)(libdynamic_KNativePtr ref, const libdynamic_KType* type);

  /* User functions. */
  struct {
    struct {
      void (*foo)(const char* name);
      struct {
        libdynamic_KType* (*_type)(void);
        libdynamic_kref_User (*User)(const char* name, libdynamic_KInt age);
        const char* (*get_name)(libdynamic_kref_User thiz);
        libdynamic_KInt (*get_age)(libdynamic_kref_User thiz);
        libdynamic_KBoolean (*equals)(libdynamic_kref_User thiz, libdynamic_kref_kotlin_Any other);
        libdynamic_KInt (*hashCode)(libdynamic_kref_User thiz);
        const char* (*toString)(libdynamic_kref_User thiz);
        const char* (*component1)(libdynamic_kref_User thiz);
        libdynamic_KInt (*component2)(libdynamic_kref_User thiz);
        libdynamic_kref_User (*copy)(libdynamic_kref_User thiz, const char* name, libdynamic_KInt age);
      } User;
    } root;
  } kotlin;
} libdynamic_ExportedSymbols;
extern libdynamic_ExportedSymbols* libdynamic_symbols(void);
#ifdef __cplusplus
}  /* extern "C" */
#endif
#endif  /* KONAN_LIBDYNAMIC_H */
