package org.example.grpc;

import static io.grpc.MethodDescriptor.generateFullMethodName;
import static io.grpc.stub.ClientCalls.asyncBidiStreamingCall;
import static io.grpc.stub.ClientCalls.asyncClientStreamingCall;
import static io.grpc.stub.ClientCalls.asyncServerStreamingCall;
import static io.grpc.stub.ClientCalls.asyncUnaryCall;
import static io.grpc.stub.ClientCalls.blockingServerStreamingCall;
import static io.grpc.stub.ClientCalls.blockingUnaryCall;
import static io.grpc.stub.ClientCalls.futureUnaryCall;
import static io.grpc.stub.ServerCalls.asyncBidiStreamingCall;
import static io.grpc.stub.ServerCalls.asyncClientStreamingCall;
import static io.grpc.stub.ServerCalls.asyncServerStreamingCall;
import static io.grpc.stub.ServerCalls.asyncUnaryCall;
import static io.grpc.stub.ServerCalls.asyncUnimplementedStreamingCall;
import static io.grpc.stub.ServerCalls.asyncUnimplementedUnaryCall;

/**
 */
@javax.annotation.Generated(
    value = "by gRPC proto compiler (version 1.15.0)",
    comments = "Source: ChaffModel.proto")
public final class ChaffModelGrpc {

  private ChaffModelGrpc() {}

  public static final String SERVICE_NAME = "ChaffModel";

  // Static method descriptors that strictly reflect the proto.
  private static volatile io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest,
      org.example.grpc.ChaffModelOuterClass.ResponseMessage> getCreateChaffMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "createChaff",
      requestType = org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest.class,
      responseType = org.example.grpc.ChaffModelOuterClass.ResponseMessage.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest,
      org.example.grpc.ChaffModelOuterClass.ResponseMessage> getCreateChaffMethod() {
    io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest, org.example.grpc.ChaffModelOuterClass.ResponseMessage> getCreateChaffMethod;
    if ((getCreateChaffMethod = ChaffModelGrpc.getCreateChaffMethod) == null) {
      synchronized (ChaffModelGrpc.class) {
        if ((getCreateChaffMethod = ChaffModelGrpc.getCreateChaffMethod) == null) {
          ChaffModelGrpc.getCreateChaffMethod = getCreateChaffMethod = 
              io.grpc.MethodDescriptor.<org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest, org.example.grpc.ChaffModelOuterClass.ResponseMessage>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(
                  "ChaffModel", "createChaff"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  org.example.grpc.ChaffModelOuterClass.ResponseMessage.getDefaultInstance()))
                  .setSchemaDescriptor(new ChaffModelMethodDescriptorSupplier("createChaff"))
                  .build();
          }
        }
     }
     return getCreateChaffMethod;
  }

  private static volatile io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest,
      org.example.grpc.ChaffModelOuterClass.ChaffInfo> getGetChaffInfoMethod;

  @io.grpc.stub.annotations.RpcMethod(
      fullMethodName = SERVICE_NAME + '/' + "getChaffInfo",
      requestType = org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest.class,
      responseType = org.example.grpc.ChaffModelOuterClass.ChaffInfo.class,
      methodType = io.grpc.MethodDescriptor.MethodType.UNARY)
  public static io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest,
      org.example.grpc.ChaffModelOuterClass.ChaffInfo> getGetChaffInfoMethod() {
    io.grpc.MethodDescriptor<org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest, org.example.grpc.ChaffModelOuterClass.ChaffInfo> getGetChaffInfoMethod;
    if ((getGetChaffInfoMethod = ChaffModelGrpc.getGetChaffInfoMethod) == null) {
      synchronized (ChaffModelGrpc.class) {
        if ((getGetChaffInfoMethod = ChaffModelGrpc.getGetChaffInfoMethod) == null) {
          ChaffModelGrpc.getGetChaffInfoMethod = getGetChaffInfoMethod = 
              io.grpc.MethodDescriptor.<org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest, org.example.grpc.ChaffModelOuterClass.ChaffInfo>newBuilder()
              .setType(io.grpc.MethodDescriptor.MethodType.UNARY)
              .setFullMethodName(generateFullMethodName(
                  "ChaffModel", "getChaffInfo"))
              .setSampledToLocalTracing(true)
              .setRequestMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest.getDefaultInstance()))
              .setResponseMarshaller(io.grpc.protobuf.ProtoUtils.marshaller(
                  org.example.grpc.ChaffModelOuterClass.ChaffInfo.getDefaultInstance()))
                  .setSchemaDescriptor(new ChaffModelMethodDescriptorSupplier("getChaffInfo"))
                  .build();
          }
        }
     }
     return getGetChaffInfoMethod;
  }

  /**
   * Creates a new async stub that supports all call types for the service
   */
  public static ChaffModelStub newStub(io.grpc.Channel channel) {
    return new ChaffModelStub(channel);
  }

  /**
   * Creates a new blocking-style stub that supports unary and streaming output calls on the service
   */
  public static ChaffModelBlockingStub newBlockingStub(
      io.grpc.Channel channel) {
    return new ChaffModelBlockingStub(channel);
  }

  /**
   * Creates a new ListenableFuture-style stub that supports unary calls on the service
   */
  public static ChaffModelFutureStub newFutureStub(
      io.grpc.Channel channel) {
    return new ChaffModelFutureStub(channel);
  }

  /**
   */
  public static abstract class ChaffModelImplBase implements io.grpc.BindableService {

    /**
     */
    public void createChaff(org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest request,
        io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ResponseMessage> responseObserver) {
      asyncUnimplementedUnaryCall(getCreateChaffMethod(), responseObserver);
    }

    /**
     */
    public void getChaffInfo(org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest request,
        io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ChaffInfo> responseObserver) {
      asyncUnimplementedUnaryCall(getGetChaffInfoMethod(), responseObserver);
    }

    @java.lang.Override public final io.grpc.ServerServiceDefinition bindService() {
      return io.grpc.ServerServiceDefinition.builder(getServiceDescriptor())
          .addMethod(
            getCreateChaffMethod(),
            asyncUnaryCall(
              new MethodHandlers<
                org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest,
                org.example.grpc.ChaffModelOuterClass.ResponseMessage>(
                  this, METHODID_CREATE_CHAFF)))
          .addMethod(
            getGetChaffInfoMethod(),
            asyncUnaryCall(
              new MethodHandlers<
                org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest,
                org.example.grpc.ChaffModelOuterClass.ChaffInfo>(
                  this, METHODID_GET_CHAFF_INFO)))
          .build();
    }
  }

  /**
   */
  public static final class ChaffModelStub extends io.grpc.stub.AbstractStub<ChaffModelStub> {
    private ChaffModelStub(io.grpc.Channel channel) {
      super(channel);
    }

    private ChaffModelStub(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected ChaffModelStub build(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      return new ChaffModelStub(channel, callOptions);
    }

    /**
     */
    public void createChaff(org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest request,
        io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ResponseMessage> responseObserver) {
      asyncUnaryCall(
          getChannel().newCall(getCreateChaffMethod(), getCallOptions()), request, responseObserver);
    }

    /**
     */
    public void getChaffInfo(org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest request,
        io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ChaffInfo> responseObserver) {
      asyncUnaryCall(
          getChannel().newCall(getGetChaffInfoMethod(), getCallOptions()), request, responseObserver);
    }
  }

  /**
   */
  public static final class ChaffModelBlockingStub extends io.grpc.stub.AbstractStub<ChaffModelBlockingStub> {
    private ChaffModelBlockingStub(io.grpc.Channel channel) {
      super(channel);
    }

    private ChaffModelBlockingStub(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected ChaffModelBlockingStub build(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      return new ChaffModelBlockingStub(channel, callOptions);
    }

    /**
     */
    public org.example.grpc.ChaffModelOuterClass.ResponseMessage createChaff(org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest request) {
      return blockingUnaryCall(
          getChannel(), getCreateChaffMethod(), getCallOptions(), request);
    }

    /**
     */
    public org.example.grpc.ChaffModelOuterClass.ChaffInfo getChaffInfo(org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest request) {
      return blockingUnaryCall(
          getChannel(), getGetChaffInfoMethod(), getCallOptions(), request);
    }
  }

  /**
   */
  public static final class ChaffModelFutureStub extends io.grpc.stub.AbstractStub<ChaffModelFutureStub> {
    private ChaffModelFutureStub(io.grpc.Channel channel) {
      super(channel);
    }

    private ChaffModelFutureStub(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      super(channel, callOptions);
    }

    @java.lang.Override
    protected ChaffModelFutureStub build(io.grpc.Channel channel,
        io.grpc.CallOptions callOptions) {
      return new ChaffModelFutureStub(channel, callOptions);
    }

    /**
     */
    public com.google.common.util.concurrent.ListenableFuture<org.example.grpc.ChaffModelOuterClass.ResponseMessage> createChaff(
        org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest request) {
      return futureUnaryCall(
          getChannel().newCall(getCreateChaffMethod(), getCallOptions()), request);
    }

    /**
     */
    public com.google.common.util.concurrent.ListenableFuture<org.example.grpc.ChaffModelOuterClass.ChaffInfo> getChaffInfo(
        org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest request) {
      return futureUnaryCall(
          getChannel().newCall(getGetChaffInfoMethod(), getCallOptions()), request);
    }
  }

  private static final int METHODID_CREATE_CHAFF = 0;
  private static final int METHODID_GET_CHAFF_INFO = 1;

  private static final class MethodHandlers<Req, Resp> implements
      io.grpc.stub.ServerCalls.UnaryMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ServerStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.ClientStreamingMethod<Req, Resp>,
      io.grpc.stub.ServerCalls.BidiStreamingMethod<Req, Resp> {
    private final ChaffModelImplBase serviceImpl;
    private final int methodId;

    MethodHandlers(ChaffModelImplBase serviceImpl, int methodId) {
      this.serviceImpl = serviceImpl;
      this.methodId = methodId;
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public void invoke(Req request, io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        case METHODID_CREATE_CHAFF:
          serviceImpl.createChaff((org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest) request,
              (io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ResponseMessage>) responseObserver);
          break;
        case METHODID_GET_CHAFF_INFO:
          serviceImpl.getChaffInfo((org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest) request,
              (io.grpc.stub.StreamObserver<org.example.grpc.ChaffModelOuterClass.ChaffInfo>) responseObserver);
          break;
        default:
          throw new AssertionError();
      }
    }

    @java.lang.Override
    @java.lang.SuppressWarnings("unchecked")
    public io.grpc.stub.StreamObserver<Req> invoke(
        io.grpc.stub.StreamObserver<Resp> responseObserver) {
      switch (methodId) {
        default:
          throw new AssertionError();
      }
    }
  }

  private static abstract class ChaffModelBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoFileDescriptorSupplier, io.grpc.protobuf.ProtoServiceDescriptorSupplier {
    ChaffModelBaseDescriptorSupplier() {}

    @java.lang.Override
    public com.google.protobuf.Descriptors.FileDescriptor getFileDescriptor() {
      return org.example.grpc.ChaffModelOuterClass.getDescriptor();
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.ServiceDescriptor getServiceDescriptor() {
      return getFileDescriptor().findServiceByName("ChaffModel");
    }
  }

  private static final class ChaffModelFileDescriptorSupplier
      extends ChaffModelBaseDescriptorSupplier {
    ChaffModelFileDescriptorSupplier() {}
  }

  private static final class ChaffModelMethodDescriptorSupplier
      extends ChaffModelBaseDescriptorSupplier
      implements io.grpc.protobuf.ProtoMethodDescriptorSupplier {
    private final String methodName;

    ChaffModelMethodDescriptorSupplier(String methodName) {
      this.methodName = methodName;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.MethodDescriptor getMethodDescriptor() {
      return getServiceDescriptor().findMethodByName(methodName);
    }
  }

  private static volatile io.grpc.ServiceDescriptor serviceDescriptor;

  public static io.grpc.ServiceDescriptor getServiceDescriptor() {
    io.grpc.ServiceDescriptor result = serviceDescriptor;
    if (result == null) {
      synchronized (ChaffModelGrpc.class) {
        result = serviceDescriptor;
        if (result == null) {
          serviceDescriptor = result = io.grpc.ServiceDescriptor.newBuilder(SERVICE_NAME)
              .setSchemaDescriptor(new ChaffModelFileDescriptorSupplier())
              .addMethod(getCreateChaffMethod())
              .addMethod(getGetChaffInfoMethod())
              .build();
        }
      }
    }
    return result;
  }
}
