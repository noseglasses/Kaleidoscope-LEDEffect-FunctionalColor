#pragma once

namespace kaleidoscope {
namespace LEDEffect_FunctionalColor {
   
 /* Here's a big list of color names based on the CSS color names.
   */

static constexpr cRGB warmwhite = CRGB(255, 250, 200);
static constexpr cRGB aliceblue = CRGB(240, 248, 255);
static constexpr cRGB antiquewhite = CRGB(250, 235, 215);
static constexpr cRGB aqua = CRGB(0, 255, 255);
static constexpr cRGB aquamarine = CRGB(127, 255, 212);
static constexpr cRGB azure = CRGB(240, 255, 255);
static constexpr cRGB beige = CRGB(245, 245, 220);
static constexpr cRGB bisque = CRGB(255, 228, 196);
static constexpr cRGB black = CRGB(0, 0, 0);
static constexpr cRGB blanchedalmond = CRGB(255, 235, 205);
static constexpr cRGB blue = CRGB(0, 0, 255);
static constexpr cRGB blueviolet = CRGB(138, 43, 226);
static constexpr cRGB brown = CRGB(165, 42, 42);
static constexpr cRGB burlywood = CRGB(222, 184, 135);
static constexpr cRGB cadetblue = CRGB(95, 158, 160);
static constexpr cRGB chartreuse = CRGB(127, 255, 0);
static constexpr cRGB chocolate = CRGB(210, 105, 30);
static constexpr cRGB coral = CRGB(255, 127, 80);
static constexpr cRGB cornflowerblue = CRGB(100, 149, 237);
static constexpr cRGB cornsilk = CRGB(255, 248, 220);
static constexpr cRGB crimson = CRGB(220, 20, 60);
static constexpr cRGB cyan = CRGB(0, 255, 255);
static constexpr cRGB darkblue = CRGB(0, 0, 139);
static constexpr cRGB darkcyan = CRGB(0, 139, 139);
static constexpr cRGB darkgoldenrod = CRGB(184, 134, 11);
static constexpr cRGB darkgray = CRGB(169, 169, 169);
static constexpr cRGB darkgrey = CRGB(169, 169, 169);
static constexpr cRGB darkgreen = CRGB(0, 100, 0);
static constexpr cRGB darkkhaki = CRGB(189, 183, 107);
static constexpr cRGB darkmagenta = CRGB(139, 0, 139);
static constexpr cRGB darkolivegreen = CRGB(85, 107, 47);
static constexpr cRGB darkorange = CRGB(255, 140, 0);
static constexpr cRGB darkorchid = CRGB(153, 50, 204);
static constexpr cRGB darkred = CRGB(139, 0, 0);
static constexpr cRGB darksalmon = CRGB(233, 150, 122);
static constexpr cRGB darkseagreen = CRGB(143, 188, 143);
static constexpr cRGB darkslateblue = CRGB(72, 61, 139);
static constexpr cRGB darkslategray = CRGB(47, 79, 79);
static constexpr cRGB darkslategrey = CRGB(47, 79, 79);
static constexpr cRGB darkturquoise = CRGB(0, 206, 209);
static constexpr cRGB darkviolet = CRGB(148, 0, 211);
static constexpr cRGB deeppink = CRGB(255, 20, 147);
static constexpr cRGB deepskyblue = CRGB(0, 191, 255);
static constexpr cRGB dimgray = CRGB(105, 105, 105);
static constexpr cRGB dimgrey = CRGB(105, 105, 105);
static constexpr cRGB dodgerblue = CRGB(30, 144, 255);
static constexpr cRGB firebrick = CRGB(178, 34, 34);
static constexpr cRGB floralwhite = CRGB(255, 250, 240);
static constexpr cRGB forestgreen = CRGB(34, 139, 34);
static constexpr cRGB fuchsia = CRGB(255, 0, 255);
static constexpr cRGB gainsboro = CRGB(220, 220, 220);
static constexpr cRGB ghostwhite = CRGB(248, 248, 255);
static constexpr cRGB gold = CRGB(255, 215, 0);
static constexpr cRGB goldenrod = CRGB(218, 165, 32);
static constexpr cRGB gray = CRGB(128, 128, 128);
static constexpr cRGB grey = CRGB(128, 128, 128);
static constexpr cRGB green = CRGB(0, 128, 0);
static constexpr cRGB greenyellow = CRGB(173, 255, 47);
static constexpr cRGB honeydew = CRGB(240, 255, 240);
static constexpr cRGB hotpink = CRGB(255, 105, 180);
static constexpr cRGB indianred = CRGB(205, 92, 92);
static constexpr cRGB indigo = CRGB(75, 0, 130);
static constexpr cRGB ivory = CRGB(255, 255, 240);
static constexpr cRGB khaki = CRGB(240, 230, 140);
static constexpr cRGB lavender = CRGB(230, 230, 250);
static constexpr cRGB lavenderblush = CRGB(255, 240, 245);
static constexpr cRGB lawngreen = CRGB(124, 252, 0);
static constexpr cRGB lemonchiffon = CRGB(255, 250, 205);
static constexpr cRGB lightblue = CRGB(173, 216, 230);
static constexpr cRGB lightcoral = CRGB(240, 128, 128);
static constexpr cRGB lightcyan = CRGB(224, 255, 255);
static constexpr cRGB lightgoldenrodyellow = CRGB(250, 250, 210);
static constexpr cRGB lightgray = CRGB(211, 211, 211);
static constexpr cRGB lightgrey = CRGB(211, 211, 211);
static constexpr cRGB lightgreen = CRGB(144, 238, 144);
static constexpr cRGB lightpink = CRGB(255, 182, 193);
static constexpr cRGB lightsalmon = CRGB(255, 160, 122);
static constexpr cRGB lightseagreen = CRGB(32, 178, 170);
 static constexpr cRGB lightskyblue = CRGB(135, 206, 250);
static constexpr cRGB lightslategray = CRGB(119, 136, 153);
static constexpr cRGB lightslategrey = CRGB(119, 136, 153);
static constexpr cRGB lightsteelblue = CRGB(176, 196, 222);
static constexpr cRGB lightyellow = CRGB(255, 255, 224);
static constexpr cRGB lime = CRGB(0, 255, 0);
static constexpr cRGB limegreen = CRGB(50, 205, 50);
static constexpr cRGB linen = CRGB(250, 240, 230);
static constexpr cRGB magenta = CRGB(255, 0, 255);
static constexpr cRGB maroon = CRGB(128, 0, 0);
static constexpr cRGB mediumaquamarine = CRGB(102, 205, 170);
static constexpr cRGB mediumblue = CRGB(0, 0, 205);
static constexpr cRGB mediumorchid = CRGB(186, 85, 211);
static constexpr cRGB mediumpurple = CRGB(147, 112, 219);
static constexpr cRGB mediumseagreen = CRGB(60, 179, 113);
static constexpr cRGB mediumslateblue = CRGB(123, 104, 238);
static constexpr cRGB mediumspringgreen = CRGB(0, 250, 154);
static constexpr cRGB mediumturquoise = CRGB(72, 209, 204);
static constexpr cRGB mediumvioletred = CRGB(199, 21, 133);
static constexpr cRGB midnightblue = CRGB(25, 25, 112);
static constexpr cRGB mintcream = CRGB(245, 255, 250);
static constexpr cRGB mistyrose = CRGB(255, 228, 225);
static constexpr cRGB moccasin = CRGB(255, 228, 181);
static constexpr cRGB navajowhite = CRGB(255, 222, 173);
static constexpr cRGB navy = CRGB(0, 0, 128);
static constexpr cRGB oldlace = CRGB(253, 245, 230);
static constexpr cRGB olive = CRGB(128, 128, 0);
static constexpr cRGB olivedrab = CRGB(107, 142, 35);
static constexpr cRGB orange = CRGB(255, 165, 0);
  // The original orangered looked exactly like red to me, so I adjusted
  //cRGB orangered = CRGB(255, 69, 0);
static constexpr cRGB orangered = CRGB(255, 100, 0);
static constexpr cRGB orchid = CRGB(218, 112, 214);
static constexpr cRGB palegoldenrod = CRGB(238, 232, 170);
static constexpr cRGB palegreen = CRGB(152, 251, 152);
static constexpr cRGB paleturquoise = CRGB(175, 238, 238);
static constexpr cRGB palevioletred = CRGB(219, 112, 147);
static constexpr cRGB papayawhip = CRGB(255, 239, 213);
static constexpr cRGB peachpuff = CRGB(255, 218, 185);
static constexpr cRGB peru = CRGB(205, 133, 63);
static constexpr cRGB pink = CRGB(255, 192, 203);
static constexpr cRGB plum = CRGB(221, 160, 221);
static constexpr cRGB powderblue = CRGB(176, 224, 230);
static constexpr cRGB purple = CRGB(128, 0, 128);
static constexpr cRGB rebeccapurple = CRGB(102, 51, 153);
static constexpr cRGB red = CRGB(255, 0, 0);
static constexpr cRGB rosybrown = CRGB(188, 143, 143);
static constexpr cRGB royalblue = CRGB(65, 105, 225);
static constexpr cRGB saddlebrown = CRGB(139, 69, 19);
static constexpr cRGB salmon = CRGB(250, 128, 114);
static constexpr cRGB sandybrown = CRGB(244, 164, 96);
static constexpr cRGB seagreen = CRGB(46, 139, 87);
static constexpr cRGB seashell = CRGB(255, 245, 238);
static constexpr cRGB sienna = CRGB(160, 82, 45);
static constexpr cRGB silver = CRGB(192, 192, 192);
static constexpr cRGB skyblue = CRGB(135, 206, 235);
static constexpr cRGB slateblue = CRGB(106, 90, 205);
static constexpr cRGB slategray = CRGB(112, 128, 144);
static constexpr cRGB slategrey = CRGB(112, 128, 144);
static constexpr cRGB snow = CRGB(255, 250, 250);
static constexpr cRGB springgreen = CRGB(0, 255, 127);
static constexpr cRGB steelblue = CRGB(70, 130, 180);
static constexpr cRGB tan = CRGB(210, 180, 140);
static constexpr cRGB teal = CRGB(0, 128, 128);
static constexpr cRGB thistle = CRGB(216, 191, 216);
static constexpr cRGB tomato = CRGB(255, 99, 71);
static constexpr cRGB turquoise = CRGB(64, 224, 208);
static constexpr cRGB violet = CRGB(238, 130, 238);
static constexpr cRGB wheat = CRGB(245, 222, 179);
static constexpr cRGB white = CRGB(255, 255, 255);
static constexpr cRGB whitesmoke = CRGB(245, 245, 245);
static constexpr cRGB yellow = CRGB(255, 255, 0);
static constexpr cRGB yellowgreen = CRGB(154, 205, 50);




/*


//define colors for certain groups of keys
static constexpr cRGB color_escape = dim(red, 140);
static constexpr cRGB color_numbers = dim(antiquewhite, 220);
static constexpr cRGB color_letters = dim(antiquewhite, 100);
static constexpr cRGB color_punctuation = dim(antiquewhite, 150);
static constexpr cRGB color_brackets = dim(antiquewhite, 200);
static constexpr cRGB color_backslash = dim(antiquewhite, 200);
static constexpr cRGB color_pipe = dim(antiquewhite, 200);
static constexpr cRGB color_space = dim(white, 180);
static constexpr cRGB color_tab = dim(white, 180);
static constexpr cRGB color_backspace = dim(red, 120);
static constexpr cRGB color_delete = dim(orangered, 250);
static constexpr cRGB color_enter = dim(white, 250);
static constexpr cRGB color_arrows = dim(white, 240);
static constexpr cRGB color_nav = dim(yellow, 220);
static constexpr cRGB color_insert = dim(yellowgreen, 200);
static constexpr cRGB color_shift = dim(palegreen, 220);
static constexpr cRGB color_ctrl = dim(skyblue, 170);
static constexpr cRGB color_alt = dim(forestgreen, 240);
//Mac command or Windows logo key
static constexpr cRGB color_cmd = dim(pink, 170);
//application context menu key
static constexpr cRGB color_app = dim(antiquewhite, 150);

static constexpr cRGB color_printscreen = dim(orange, 200);
static constexpr cRGB color_pause = dim(orangered, 150);
static constexpr cRGB color_scrolllock = dim(orange, 150);
static constexpr cRGB color_capslock = dim(orange, 150);

static constexpr cRGB color_fkeys = dim(red, 180);
static constexpr cRGB color_fn = dim(white, 140);
static constexpr cRGB color_media = dim(violet, 250);
static constexpr cRGB color_led = dim(blue, 250);
static constexpr cRGB color_mouse = dim(cyan, 250);

*/
} // namespace LEDEffect_FunctionalColor
} // namespace kaleidoscope
