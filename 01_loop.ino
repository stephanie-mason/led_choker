void loop()
{ 
  startIndex = startIndex + 1;
  /* Pick Random */
  EVERY_N_SECONDS( 12 ) { currentPattern = random(lastAnimation); }

  /*Cycle Through Patterns */
  /*EVERY_N_SECONDS(5) { 
    if (currentPattern < lastAnimation) {
      currentPattern++; 
    } else {
      currentPattern = 0;
    }   
  }*/
  

  
  switch (currentPattern) {
    case 0:
      /* BRITE N SHINE */   
      paletteFill(startIndex, BriteNoBlack_p, 5);
      break; 
    case 1:
      /* BRITE RAIN */ 
      paletteFill(startIndex, BriteWithBlack_p, 10);   
      break;
    case 2:
      paletteFill(startIndex, BriteWithBlack_p, 1);
      break;
    case 3:
      paletteFill(startIndex, Vaporwave_p, 10);
      break;
    case 4:
      paletteFill(startIndex, Vaporwave_p, 1);
      break;
    case 5:
      paletteFill(startIndex, SoftLove_p, 1);
      break;
    case 6:
      paletteFill(startIndex, SoftLove_p, 10);
      break;   
    case 7:
      paletteFillReverse(startIndex, PewPew_p, 1);
      break;
    case 8:
      paletteFillReverse(startIndex, RainbowColors_p, 1);
      addGlitter(20); 
      break;
    case 9:
      paletteFill(startIndex, RainbowColors_p, 5);
      addGlitter(20);  
      break;
    case 10:
      sparkle();
      break;
    case 11:
      paletteFillReverse(startIndex, Purple_p, 8);
      break;
    case 12:
      paletteFillReverse(startIndex, RedTeal_p, 10);
      break;
    case 13:
      paletteFill(startIndex, PewPew_p, 4);
      break;
    case 14:
      paletteFill(startIndex, BlueOrange_p, 4);
      addGlitter(20); 
      break;
    case 15:
      juggle(startIndex, RainbowColors_p, 5);
      addGlitter(20); 
      break;
    case 16:
      juggle(startIndex, Purple_p, 5);
      break;
  }

  
  FastLED.show();    
  FastLED.delay(animationDelay); 
}

