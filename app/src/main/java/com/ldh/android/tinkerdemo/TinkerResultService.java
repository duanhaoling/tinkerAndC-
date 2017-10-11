package com.ldh.android.tinkerdemo;

import android.content.Intent;
import android.os.IBinder;

import com.tencent.tinker.lib.service.DefaultTinkerResultService;

public class TinkerResultService extends DefaultTinkerResultService {
    public TinkerResultService() {
    }

    @Override
    public IBinder onBind(Intent intent) {
        // TODO: Return the communication channel to the service.
        throw new UnsupportedOperationException("Not yet implemented");
    }
}
