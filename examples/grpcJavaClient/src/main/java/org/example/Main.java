package org.example;

import io.grpc.ManagedChannel;
import io.grpc.ManagedChannelBuilder;
import org.example.grpc.ChaffModelGrpc.ChaffModelBlockingStub;
import org.example.grpc.ChaffModelOuterClass.ChaffInfo;
import org.example.grpc.ChaffModelOuterClass.ChaffInfoRequest;
import org.example.grpc.ChaffModelOuterClass.ResponseMessage;
import org.example.grpc.ChaffModelOuterClass.ChaffCreateRequest;

import static org.example.grpc.ChaffModelGrpc.newBlockingStub;

public class Main {

    public static void main(String[] args) {

        int id = 1;
        double maxRCS = 200.0;
        double T_c = 15.0;
        double T_if = 50.0;
        double T_ef = 100.0;
        double T_trend = 30.0;
        double creationTime = 0.0;

        ManagedChannel channel = ManagedChannelBuilder.forAddress("localhost", 9090).usePlaintext().build();
        ChaffModelBlockingStub userStub = newBlockingStub(channel);

        ChaffCreateRequest requestCreate = ChaffCreateRequest.newBuilder()
                .setId(id)
                .setMaxRCS(maxRCS)
                .setTC(T_c)
                .setTIf(T_if)
                .setTEf(T_ef)
                .setTTrend(T_trend)
                .setCretionTime(creationTime)
                .build();

        ResponseMessage replyCreate = userStub.createChaff(requestCreate);

        System.out.println(replyCreate.getResponseMessage());

        for (double i = creationTime; i < T_ef; i += 0.1) {

            ChaffInfoRequest infoRequest = ChaffInfoRequest.newBuilder().setId(id).setSimulationTime(i).build();
            ChaffInfo info = userStub.getChaffInfo(infoRequest);
            System.out.println(info.getRCS());

        }

    }
}