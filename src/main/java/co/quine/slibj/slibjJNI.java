/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package co.quine.slibj;

import java.io.*;

public class slibjJNI {

static {
    try {
        LoadLib.fromJar("/lib/libslibj.jnilib");
    } catch (IOException e) {
        try {
            File model = new File("src/main/resources/lib/libslibj.jnilib");
            String absPath = model.getAbsolutePath();
            System.load(absPath);
        } catch (UnsatisfiedLinkError err) {
            err.printStackTrace();
            System.exit(1);
        }
    }
}

  public final static native long new_RectangleVector__SWIG_0();
  public final static native long new_RectangleVector__SWIG_1(long jarg1);
  public final static native long RectangleVector_size(long jarg1, RectangleVector jarg1_);
  public final static native long RectangleVector_capacity(long jarg1, RectangleVector jarg1_);
  public final static native void RectangleVector_reserve(long jarg1, RectangleVector jarg1_, long jarg2);
  public final static native boolean RectangleVector_isEmpty(long jarg1, RectangleVector jarg1_);
  public final static native void RectangleVector_clear(long jarg1, RectangleVector jarg1_);
  public final static native void RectangleVector_add(long jarg1, RectangleVector jarg1_, long jarg2);
  public final static native long RectangleVector_get(long jarg1, RectangleVector jarg1_, int jarg2);
  public final static native void RectangleVector_set(long jarg1, RectangleVector jarg1_, int jarg2, long jarg3);
  public final static native void delete_RectangleVector(long jarg1);
  public final static native long new_ObjectModelVector__SWIG_0();
  public final static native long new_ObjectModelVector__SWIG_1(long jarg1);
  public final static native long ObjectModelVector_size(long jarg1, ObjectModelVector jarg1_);
  public final static native long ObjectModelVector_capacity(long jarg1, ObjectModelVector jarg1_);
  public final static native void ObjectModelVector_reserve(long jarg1, ObjectModelVector jarg1_, long jarg2);
  public final static native boolean ObjectModelVector_isEmpty(long jarg1, ObjectModelVector jarg1_);
  public final static native void ObjectModelVector_clear(long jarg1, ObjectModelVector jarg1_);
  public final static native void ObjectModelVector_add(long jarg1, ObjectModelVector jarg1_, long jarg2);
  public final static native long ObjectModelVector_get(long jarg1, ObjectModelVector jarg1_, int jarg2);
  public final static native void ObjectModelVector_set(long jarg1, ObjectModelVector jarg1_, int jarg2, long jarg3);
  public final static native void delete_ObjectModelVector(long jarg1);
  public final static native long new_FloatVector__SWIG_0();
  public final static native long new_FloatVector__SWIG_1(long jarg1);
  public final static native long FloatVector_size(long jarg1, FloatVector jarg1_);
  public final static native long FloatVector_capacity(long jarg1, FloatVector jarg1_);
  public final static native void FloatVector_reserve(long jarg1, FloatVector jarg1_, long jarg2);
  public final static native boolean FloatVector_isEmpty(long jarg1, FloatVector jarg1_);
  public final static native void FloatVector_clear(long jarg1, FloatVector jarg1_);
  public final static native void FloatVector_add(long jarg1, FloatVector jarg1_, float jarg2);
  public final static native float FloatVector_get(long jarg1, FloatVector jarg1_, int jarg2);
  public final static native void FloatVector_set(long jarg1, FloatVector jarg1_, int jarg2, float jarg3);
  public final static native void delete_FloatVector(long jarg1);
  public final static native long new_ByteVector__SWIG_0();
  public final static native long new_ByteVector__SWIG_1(long jarg1);
  public final static native long ByteVector_size(long jarg1, ByteVector jarg1_);
  public final static native long ByteVector_capacity(long jarg1, ByteVector jarg1_);
  public final static native void ByteVector_reserve(long jarg1, ByteVector jarg1_, long jarg2);
  public final static native boolean ByteVector_isEmpty(long jarg1, ByteVector jarg1_);
  public final static native void ByteVector_clear(long jarg1, ByteVector jarg1_);
  public final static native void ByteVector_add(long jarg1, ByteVector jarg1_, byte jarg2);
  public final static native byte ByteVector_get(long jarg1, ByteVector jarg1_, int jarg2);
  public final static native void ByteVector_set(long jarg1, ByteVector jarg1_, int jarg2, byte jarg3);
  public final static native void delete_ByteVector(long jarg1);
  public final static native long new_FaceDetection(String jarg1);
  public final static native String FaceDetection_largestFace__SWIG_0(long jarg1, FaceDetection jarg1_, String jarg2, long jarg3);
  public final static native String FaceDetection_largestFace__SWIG_1(long jarg1, FaceDetection jarg1_, String jarg2, long jarg3, String jarg4);
  public final static native String FaceDetection_largestFace__SWIG_2(long jarg1, FaceDetection jarg1_, String jarg2, long jarg3, String jarg4, String jarg5);
  public final static native void delete_FaceDetection(long jarg1);
  public final static native long new_ImageConversion();
  public final static native long ImageConversion_mat2Array(long jarg1, ImageConversion jarg1_, long jarg2);
  public final static native long ImageConversion_decodeImage(long jarg1, ImageConversion jarg1_, long jarg2, ByteVector jarg2_);
  public final static native void ImageConversion_image2Array__SWIG_0(long jarg1, ImageConversion jarg1_, String jarg2, String jarg3, int jarg4);
  public final static native long ImageConversion_image2Array__SWIG_1(long jarg1, ImageConversion jarg1_, String jarg2, int jarg3);
  public final static native void delete_ImageConversion(long jarg1);
}
