void addGlitter( fract8 chanceOfGlitter) 
{
  if( random8() < chanceOfGlitter) {
    leds[ random16(NUM_LEDS) ] += CRGB::White;
  }
}

void juggle(uint8_t colorIndex, const CRGBPalette16& palette, uint8_t gradientSteps) {
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy( leds, NUM_LEDS, 20);
  for( int i = 0; i < 8; i++) {
    leds[beatsin16( i+16, 0, NUM_LEDS-1 )] |= ColorFromPalette( palette, colorIndex, 255, LINEARBLEND);
    colorIndex -= gradientSteps;
  }
}

void paletteFill(uint8_t colorIndex, const CRGBPalette16& palette, uint8_t gradientSteps) {  
  for( int i = 0; i < NUM_LEDS; i++) {
    leds[i] = ColorFromPalette( palette, colorIndex, 255, LINEARBLEND);
    colorIndex -= gradientSteps;              
  }
}

void paletteFillReverse(uint8_t colorIndex, const CRGBPalette16& palette, uint8_t gradientSteps) {  
  for( int i = 0; i < NUM_LEDS; i++) {
    leds[i] = ColorFromPalette( palette, colorIndex, 255, LINEARBLEND);
    colorIndex += gradientSteps;              
  }
}

void sparkle() 
{ 
  fadeToBlackBy( leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CRGB::White;
}
