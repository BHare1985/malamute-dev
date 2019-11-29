/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "malamute.h"
#include "org_zeromq_mlm_MlmClient.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmClient__1_1new (JNIEnv *env, jclass c)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) mlm_client_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmClient__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    mlm_client_destroy ((mlm_client_t **) &self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmClient__1_1actor (JNIEnv *env, jclass c, jlong self)
{
    jlong actor_ = (jlong) (intptr_t) mlm_client_actor ((mlm_client_t *) (intptr_t) self);
    return actor_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmClient__1_1msgpipe (JNIEnv *env, jclass c, jlong self)
{
    jlong msgpipe_ = (jlong) (intptr_t) mlm_client_msgpipe ((mlm_client_t *) (intptr_t) self);
    return msgpipe_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_mlm_MlmClient__1_1connected (JNIEnv *env, jclass c, jlong self)
{
    jboolean connected_ = (jboolean) mlm_client_connected ((mlm_client_t *) (intptr_t) self);
    return connected_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1setPlainAuth (JNIEnv *env, jclass c, jlong self, jstring username, jstring password)
{
    char *username_ = (char *) (*env)->GetStringUTFChars (env, username, NULL);
    char *password_ = (char *) (*env)->GetStringUTFChars (env, password, NULL);
    jint set_plain_auth_ = (jint) mlm_client_set_plain_auth ((mlm_client_t *) (intptr_t) self, username_, password_);
    (*env)->ReleaseStringUTFChars (env, username, username_);
    (*env)->ReleaseStringUTFChars (env, password, password_);
    return set_plain_auth_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1connect (JNIEnv *env, jclass c, jlong self, jstring endpoint, jint timeout, jstring address)
{
    char *endpoint_ = (char *) (*env)->GetStringUTFChars (env, endpoint, NULL);
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    jint connect_ = (jint) mlm_client_connect ((mlm_client_t *) (intptr_t) self, endpoint_, (uint32_t) timeout, address_);
    (*env)->ReleaseStringUTFChars (env, endpoint, endpoint_);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    return connect_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1setProducer (JNIEnv *env, jclass c, jlong self, jstring stream)
{
    char *stream_ = (char *) (*env)->GetStringUTFChars (env, stream, NULL);
    jint set_producer_ = (jint) mlm_client_set_producer ((mlm_client_t *) (intptr_t) self, stream_);
    (*env)->ReleaseStringUTFChars (env, stream, stream_);
    return set_producer_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1setConsumer (JNIEnv *env, jclass c, jlong self, jstring stream, jstring pattern)
{
    char *stream_ = (char *) (*env)->GetStringUTFChars (env, stream, NULL);
    char *pattern_ = (char *) (*env)->GetStringUTFChars (env, pattern, NULL);
    jint set_consumer_ = (jint) mlm_client_set_consumer ((mlm_client_t *) (intptr_t) self, stream_, pattern_);
    (*env)->ReleaseStringUTFChars (env, stream, stream_);
    (*env)->ReleaseStringUTFChars (env, pattern, pattern_);
    return set_consumer_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1removeConsumer (JNIEnv *env, jclass c, jlong self, jstring stream)
{
    char *stream_ = (char *) (*env)->GetStringUTFChars (env, stream, NULL);
    jint remove_consumer_ = (jint) mlm_client_remove_consumer ((mlm_client_t *) (intptr_t) self, stream_);
    (*env)->ReleaseStringUTFChars (env, stream, stream_);
    return remove_consumer_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1setWorker (JNIEnv *env, jclass c, jlong self, jstring address, jstring pattern)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *pattern_ = (char *) (*env)->GetStringUTFChars (env, pattern, NULL);
    jint set_worker_ = (jint) mlm_client_set_worker ((mlm_client_t *) (intptr_t) self, address_, pattern_);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, pattern, pattern_);
    return set_worker_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1send (JNIEnv *env, jclass c, jlong self, jstring subject, jlong content)
{
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    jint send_ = (jint) mlm_client_send ((mlm_client_t *) (intptr_t) self, subject_, (zmsg_t **) (intptr_t) &content);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    return send_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sendto (JNIEnv *env, jclass c, jlong self, jstring address, jstring subject, jstring tracker, jint timeout, jlong content)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    char *tracker_ = (char *) (*env)->GetStringUTFChars (env, tracker, NULL);
    jint sendto_ = (jint) mlm_client_sendto ((mlm_client_t *) (intptr_t) self, address_, subject_, tracker_, (uint32_t) timeout, (zmsg_t **) (intptr_t) &content);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    (*env)->ReleaseStringUTFChars (env, tracker, tracker_);
    return sendto_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sendfor (JNIEnv *env, jclass c, jlong self, jstring address, jstring subject, jstring tracker, jint timeout, jlong content)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    char *tracker_ = (char *) (*env)->GetStringUTFChars (env, tracker, NULL);
    jint sendfor_ = (jint) mlm_client_sendfor ((mlm_client_t *) (intptr_t) self, address_, subject_, tracker_, (uint32_t) timeout, (zmsg_t **) (intptr_t) &content);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    (*env)->ReleaseStringUTFChars (env, tracker, tracker_);
    return sendfor_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmClient__1_1recv (JNIEnv *env, jclass c, jlong self)
{
    jlong recv_ = (jlong) (intptr_t) mlm_client_recv ((mlm_client_t *) (intptr_t) self);
    return recv_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1command (JNIEnv *env, jclass c, jlong self)
{
    char *command_ = (char *) mlm_client_command ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, command_);
    return return_string_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1status (JNIEnv *env, jclass c, jlong self)
{
    jint status_ = (jint) mlm_client_status ((mlm_client_t *) (intptr_t) self);
    return status_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1reason (JNIEnv *env, jclass c, jlong self)
{
    char *reason_ = (char *) mlm_client_reason ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, reason_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1address (JNIEnv *env, jclass c, jlong self)
{
    char *address_ = (char *) mlm_client_address ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, address_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sender (JNIEnv *env, jclass c, jlong self)
{
    char *sender_ = (char *) mlm_client_sender ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, sender_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1subject (JNIEnv *env, jclass c, jlong self)
{
    char *subject_ = (char *) mlm_client_subject ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, subject_);
    return return_string_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_mlm_MlmClient__1_1content (JNIEnv *env, jclass c, jlong self)
{
    jlong content_ = (jlong) (intptr_t) mlm_client_content ((mlm_client_t *) (intptr_t) self);
    return content_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_mlm_MlmClient__1_1tracker (JNIEnv *env, jclass c, jlong self)
{
    char *tracker_ = (char *) mlm_client_tracker ((mlm_client_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, tracker_);
    return return_string_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sendx (JNIEnv *env, jclass c, jlong self, jstring subject, jstring content)
{
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    char *content_ = (char *) (*env)->GetStringUTFChars (env, content, NULL);
    jint sendx_ = (jint) mlm_client_sendx ((mlm_client_t *) (intptr_t) self, subject_, content_, NULL);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    (*env)->ReleaseStringUTFChars (env, content, content_);
    return sendx_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sendtox (JNIEnv *env, jclass c, jlong self, jstring address, jstring subject, jstring content)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    char *content_ = (char *) (*env)->GetStringUTFChars (env, content, NULL);
    jint sendtox_ = (jint) mlm_client_sendtox ((mlm_client_t *) (intptr_t) self, address_, subject_, content_, NULL);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    (*env)->ReleaseStringUTFChars (env, content, content_);
    return sendtox_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_mlm_MlmClient__1_1sendforx (JNIEnv *env, jclass c, jlong self, jstring address, jstring subject, jstring content)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *subject_ = (char *) (*env)->GetStringUTFChars (env, subject, NULL);
    char *content_ = (char *) (*env)->GetStringUTFChars (env, content, NULL);
    jint sendforx_ = (jint) mlm_client_sendforx ((mlm_client_t *) (intptr_t) self, address_, subject_, content_, NULL);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, subject, subject_);
    (*env)->ReleaseStringUTFChars (env, content, content_);
    return sendforx_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmClient__1_1setVerbose (JNIEnv *env, jclass c, jlong self, jboolean verbose)
{
    mlm_client_set_verbose ((mlm_client_t *) (intptr_t) self, (bool) verbose);
}

JNIEXPORT void JNICALL
Java_org_zeromq_mlm_MlmClient__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    mlm_client_test ((bool) verbose);
}

