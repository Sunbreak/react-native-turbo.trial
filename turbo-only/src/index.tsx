const TurboOnly = require('./NativeTurboOnly').default;

export function multiply(a: number, b: number): number {
  return TurboOnly.multiply(a, b);
}
