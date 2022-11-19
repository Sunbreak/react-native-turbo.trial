package com.turbocompat;

import com.facebook.react.bridge.ReactApplicationContext;

abstract class TurboCompatSpec extends NativeTurboCompatSpec {
  TurboCompatSpec(ReactApplicationContext context) {
    super(context);
  }
}
