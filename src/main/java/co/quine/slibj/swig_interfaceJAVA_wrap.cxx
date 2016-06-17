/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

/*  Errors in SWIG */
#define  SWIG_UnknownError    	   -1
#define  SWIG_IOError        	   -2
#define  SWIG_RuntimeError   	   -3
#define  SWIG_IndexError     	   -4
#define  SWIG_TypeError      	   -5
#define  SWIG_DivisionByZero 	   -6
#define  SWIG_OverflowError  	   -7
#define  SWIG_SyntaxError    	   -8
#define  SWIG_ValueError     	   -9
#define  SWIG_SystemError    	   -10
#define  SWIG_AttributeError 	   -11
#define  SWIG_MemoryError    	   -12
#define  SWIG_NullReferenceError   -13




#include "Swig.h"
#include "Types.h"
#include "FaceDetection.h"
#include <dlib/image_loader/image_loader.h>
#include <dlib/image_saver/image_saver.h>


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>


SWIGINTERN void SWIG_JavaException(JNIEnv *jenv, int code, const char *msg) {
  SWIG_JavaExceptionCodes exception_code = SWIG_JavaUnknownError;
  switch(code) {
  case SWIG_MemoryError:
    exception_code = SWIG_JavaOutOfMemoryError;
    break;
  case SWIG_IOError:
    exception_code = SWIG_JavaIOException;
    break;
  case SWIG_SystemError:
  case SWIG_RuntimeError:
    exception_code = SWIG_JavaRuntimeException;
    break;
  case SWIG_OverflowError:
  case SWIG_IndexError:
    exception_code = SWIG_JavaIndexOutOfBoundsException;
    break;
  case SWIG_DivisionByZero:
    exception_code = SWIG_JavaArithmeticException;
    break;
  case SWIG_SyntaxError:
  case SWIG_ValueError:
  case SWIG_TypeError:
    exception_code = SWIG_JavaIllegalArgumentException;
    break;
  case SWIG_UnknownError:
  default:
    exception_code = SWIG_JavaUnknownError;
    break;
  }
  SWIG_JavaThrowException(jenv, exception_code, msg);
}


#include <stdexcept>


#include <utility>

SWIGINTERN std::vector< dlib::rectangle >::const_reference std_vector_Sl_sl_Rectangle_Sg__get(std::vector< sl::Rectangle > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_sl_Rectangle_Sg__set(std::vector< sl::Rectangle > *self,int i,std::vector< dlib::rectangle >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN std::vector< dlib::full_object_detection >::const_reference std_vector_Sl_sl_ObjectModel_Sg__get(std::vector< sl::ObjectModel > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_sl_ObjectModel_Sg__set(std::vector< sl::ObjectModel > *self,int i,std::vector< dlib::full_object_detection >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_new_1RectangleVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< sl::Rectangle > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (std::vector< sl::Rectangle > *)new std::vector< sl::Rectangle >();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< sl::Rectangle > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_new_1RectangleVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< dlib::rectangle >::size_type arg1 ;
  std::vector< sl::Rectangle > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< dlib::rectangle >::size_type)jarg1; 
  {
    try {
      result = (std::vector< sl::Rectangle > *)new std::vector< sl::Rectangle >(arg1);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< sl::Rectangle > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  std::vector< dlib::rectangle >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  {
    try {
      result = ((std::vector< sl::Rectangle > const *)arg1)->size();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  std::vector< dlib::rectangle >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  {
    try {
      result = ((std::vector< sl::Rectangle > const *)arg1)->capacity();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  std::vector< dlib::rectangle >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  arg2 = (std::vector< dlib::rectangle >::size_type)jarg2; 
  {
    try {
      (arg1)->reserve(arg2);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jboolean JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  {
    try {
      result = (bool)((std::vector< sl::Rectangle > const *)arg1)->empty();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  {
    try {
      (arg1)->clear();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  std::vector< dlib::rectangle >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  arg2 = *(std::vector< dlib::rectangle >::value_type **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< dlib::rectangle >::value_type const & reference is null");
    return ;
  } 
  {
    try {
      (arg1)->push_back((std::vector< dlib::rectangle >::value_type const &)*arg2);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  int arg2 ;
  std::vector< dlib::rectangle >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  arg2 = (int)jarg2; 
  {
    try {
      try {
        result = (std::vector< dlib::rectangle >::value_type *) &std_vector_Sl_sl_Rectangle_Sg__get(arg1,arg2);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return 0;
      }
      
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< dlib::rectangle >::value_type **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_RectangleVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  int arg2 ;
  std::vector< dlib::rectangle >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(std::vector< dlib::rectangle >::value_type **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< dlib::rectangle >::value_type const & reference is null");
    return ;
  } 
  {
    try {
      try {
        std_vector_Sl_sl_Rectangle_Sg__set(arg1,arg2,(dlib::rectangle const &)*arg3);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return ;
      }
      
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_delete_1RectangleVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< sl::Rectangle > *arg1 = (std::vector< sl::Rectangle > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< sl::Rectangle > **)&jarg1; 
  {
    try {
      delete arg1;
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_new_1ObjectModelVector_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< sl::ObjectModel > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  {
    try {
      result = (std::vector< sl::ObjectModel > *)new std::vector< sl::ObjectModel >();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< sl::ObjectModel > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_new_1ObjectModelVector_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< dlib::full_object_detection >::size_type arg1 ;
  std::vector< sl::ObjectModel > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< dlib::full_object_detection >::size_type)jarg1; 
  {
    try {
      result = (std::vector< sl::ObjectModel > *)new std::vector< sl::ObjectModel >(arg1);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< sl::ObjectModel > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  std::vector< dlib::full_object_detection >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  {
    try {
      result = ((std::vector< sl::ObjectModel > const *)arg1)->size();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  std::vector< dlib::full_object_detection >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  {
    try {
      result = ((std::vector< sl::ObjectModel > const *)arg1)->capacity();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  std::vector< dlib::full_object_detection >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  arg2 = (std::vector< dlib::full_object_detection >::size_type)jarg2; 
  {
    try {
      (arg1)->reserve(arg2);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jboolean JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  {
    try {
      result = (bool)((std::vector< sl::ObjectModel > const *)arg1)->empty();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  {
    try {
      (arg1)->clear();
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  std::vector< dlib::full_object_detection >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  arg2 = *(std::vector< dlib::full_object_detection >::value_type **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< dlib::full_object_detection >::value_type const & reference is null");
    return ;
  } 
  {
    try {
      (arg1)->push_back((std::vector< dlib::full_object_detection >::value_type const &)*arg2);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  int arg2 ;
  std::vector< dlib::full_object_detection >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  arg2 = (int)jarg2; 
  {
    try {
      try {
        result = (std::vector< dlib::full_object_detection >::value_type *) &std_vector_Sl_sl_ObjectModel_Sg__get(arg1,arg2);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return 0;
      }
      
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(std::vector< dlib::full_object_detection >::value_type **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_ObjectModelVector_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3) {
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  int arg2 ;
  std::vector< dlib::full_object_detection >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(std::vector< dlib::full_object_detection >::value_type **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< dlib::full_object_detection >::value_type const & reference is null");
    return ;
  } 
  {
    try {
      try {
        std_vector_Sl_sl_ObjectModel_Sg__set(arg1,arg2,(dlib::full_object_detection const &)*arg3);
      }
      catch(std::out_of_range &_e) {
        SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
        return ;
      }
      
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_delete_1ObjectModelVector(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< sl::ObjectModel > *arg1 = (std::vector< sl::ObjectModel > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< sl::ObjectModel > **)&jarg1; 
  {
    try {
      delete arg1;
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


SWIGEXPORT jlong JNICALL Java_co_quine_slibj_slibjJNI_new_1FaceDetection(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  slibc::FaceDetection *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)jenv->GetStringUTFChars(jarg1, 0);
    if (!arg1) return 0;
  }
  {
    try {
      result = (slibc::FaceDetection *)new slibc::FaceDetection((char const *)arg1);
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  *(slibc::FaceDetection **)&jresult = result; 
  if (arg1) jenv->ReleaseStringUTFChars(jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_co_quine_slibj_slibjJNI_FaceDetection_1largestFace_1_1SWIG_10(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3) {
  jstring jresult = 0 ;
  slibc::FaceDetection *arg1 = (slibc::FaceDetection *) 0 ;
  std::string arg2 ;
  unsigned long arg3 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(slibc::FaceDetection **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (unsigned long)jarg3; 
  {
    try {
      result = (arg1)->largestFace(arg2,arg3);
    } catch(std::runtime_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/NoFacesFoundException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_co_quine_slibj_slibjJNI_FaceDetection_1largestFace_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3, jstring jarg4) {
  jstring jresult = 0 ;
  slibc::FaceDetection *arg1 = (slibc::FaceDetection *) 0 ;
  std::string arg2 ;
  unsigned long arg3 ;
  std::string arg4 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(slibc::FaceDetection **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (unsigned long)jarg3; 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  {
    try {
      result = (arg1)->largestFace(arg2,arg3,arg4);
    } catch(std::runtime_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/NoFacesFoundException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_co_quine_slibj_slibjJNI_FaceDetection_1largestFace_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3, jstring jarg4, jstring jarg5) {
  jstring jresult = 0 ;
  slibc::FaceDetection *arg1 = (slibc::FaceDetection *) 0 ;
  std::string arg2 ;
  unsigned long arg3 ;
  std::string arg4 ;
  std::string arg5 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(slibc::FaceDetection **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  (&arg2)->assign(arg2_pstr);
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  arg3 = (unsigned long)jarg3; 
  if(!jarg4) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg4_pstr = (const char *)jenv->GetStringUTFChars(jarg4, 0); 
  if (!arg4_pstr) return 0;
  (&arg4)->assign(arg4_pstr);
  jenv->ReleaseStringUTFChars(jarg4, arg4_pstr); 
  if(!jarg5) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  } 
  const char *arg5_pstr = (const char *)jenv->GetStringUTFChars(jarg5, 0); 
  if (!arg5_pstr) return 0;
  (&arg5)->assign(arg5_pstr);
  jenv->ReleaseStringUTFChars(jarg5, arg5_pstr); 
  {
    try {
      result = (arg1)->largestFace(arg2,arg3,arg4,arg5);
    } catch(std::runtime_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/NoFacesFoundException");
      jenv->ThrowNew(clazz, e.what());
      return 0;
    }
  }
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_co_quine_slibj_slibjJNI_delete_1FaceDetection(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  slibc::FaceDetection *arg1 = (slibc::FaceDetection *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(slibc::FaceDetection **)&jarg1; 
  {
    try {
      delete arg1;
    } catch(dlib::image_load_error& e) {
      jclass clazz = jenv->FindClass("co/quine/slibj/exceptions/ImageLoadErrorException");
      jenv->ThrowNew(clazz, e.what());
      return ;
    }
  }
}


#ifdef __cplusplus
}
#endif

