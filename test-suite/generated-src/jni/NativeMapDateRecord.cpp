// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "NativeMapDateRecord.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeMapDateRecord::NativeMapDateRecord() = default;

NativeMapDateRecord::~NativeMapDateRecord() = default;

auto NativeMapDateRecord::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeMapDateRecord>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::Map<::djinni::String, ::djinni::Date>::fromCpp(jniEnv, c.dates_by_id).get())};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeMapDateRecord::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 2);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeMapDateRecord>::get();
    return {::djinni::Map<::djinni::String, ::djinni::Date>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mDatesById))};
}

}  // namespace djinni_generated
