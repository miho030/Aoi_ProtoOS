#pragma once

/*

 * Modified at 2019 - 2021 by AOI, Jaehyun4428
   version 1.1.0-beta
   
   group of expressions.
   
 * major issue
   - fix all bugs from lastest release version of protogen code.
   - reinforcemnt of led print function
   - reinforcement of expression print & sleep funtional.
   
   - BRUNCH
      > Add bluetooth communication function
      > Add bluetooth remote controller & bluetooth application access control function.
*/

/* ##################################################################################################### */
/* ----------------------------------------------------------------------------------------------------- */
		//Right side of the helmet
			byte noseRight[] = { 8, 8, 0x7E, 0x3F, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00 };
			byte icon01[] = { 8, 8, 0x20, 0x78, 0xDE, 0xC7, 0xFF, 0x00, 0x00, 0x00 };
			byte icon02[] = { 8, 8, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x78, 0x1E, 0x07 };
			byte icon03[] = { 8, 8,  0x00, 0x00, 0x00, 0x00, 0x07, 0x1E, 0x78, 0xE0 };
			byte icon04[] = { 8, 8, 0x00, 0x00, 0x00, 0xE0, 0xF8, 0x1E, 0x07, 0x01 };
			byte Glitch01[] = { 8, 8, 0x0C, 0x00, 0xD4, 0x89, 0x14, 0x47, 0xD1, 0xA5 };
			byte Glitch011[] = { 8, 8, 0x00, 0x00, 0x00, 0xD5, 0x85, 0xEA, 0x17, 0x04 };
			byte Glitch02[] = { 8, 8, 0x74, 0x00, 0x4B, 0x96, 0x12, 0x00, 0x00, 0x00 };
			byte Glitch022[] = { 8, 8, 0xA2, 0x54, 0x86, 0x12, 0x05, 0x00, 0x00, 0x00 };
			byte Glitch033[] = { 8, 8, 0x4D, 0x9A, 0x69, 0xA0, 0x08, 0x00, 0x00, 0x00 };
			byte Glitch03[] = { 8, 8, 0x29, 0xA9, 0x4B, 0x2C, 0x74, 0x00, 0x00, 0x00 };
			byte Glitch04[] = { 8, 8, 0x00, 0x00, 0x95, 0x9A, 0x97, 0xEA, 0xBA, 0xD0 };
			byte Glitch044[] = { 8, 8, 0x00, 0x00, 0x88, 0xAA, 0x1B, 0x95, 0x01, 0x00 };
			byte Spooked1[] = { 8, 8, 0x01, 0x07, 0x07, 0x0F, 0x0F, 0x07, 0x07, 0x01 };
			byte Spooked2[] = { 8, 8, 0x80, 0xE0, 0xE0, 0xFF, 0xFF, 0xE0, 0xE0, 0x80 };
	

	/*
						#========================================#
						#                                        #
						#     Modified mouth section (right)     #
						#                                        #
						#========================================#
	*/
		// die expression (modified mouth, right side)
			byte dying_mouth_R1 [] = { 8, 8, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dying_mouth_R2 [] = { 8, 8, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dying_mouth_R3 [] = { 8, 8, 0xFF, 0xFF, 0x30, 0x60, 0x60, 0x40, 0xC0, 0x80 };
			byte dying_mouth_R4 [] = { 8, 8, 0xFF, 0xFF, 0x19, 0x0D, 0x0D, 0x04, 0x07, 0x03 };											

			
		// dizzy expression (modified mouth, right side)
			byte dizzy_mouth_R1 [] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dizzy_mouth_R2 [] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dizzy_mouth_R3 [] = { 8, 8, 0x00, 0x00, 0x00, 0xE0, 0x78, 0x1E, 0x07, 0x00 };
			byte dizzy_mouth_R4 [] = { 8, 8, 0x00, 0x00, 0x07, 0x1F, 0x78, 0xE0, 0x80, 0x00 };
			
			
			
/* ----------------------------------------------------------------------------------------------------- */
	
	/*
							#========================================#
							#                                        #
							#     Modified eys section (right)       #
							#                                        #
							#========================================#
	*/
		// basic eye (Right)
			byte Default_eye_01_R1 [] = { 8, 8, 0x00, 0x00, 0x18, 0x3C, 0xFC, 0xF8, 0xF0, 0xC0 };
			byte Default_eye_01_R2 [] = { 8, 8, 0x00, 0x00, 0x60, 0x70, 0x3F, 0x1F, 0x0F, 0x03 };
		
		// sleepy expression (Right side)
			byte Default_eye_02_R1 [] = { 8, 8, 0x06, 0x0F, 0xFF, 0xFE, 0xFE, 0xFC, 0x70, 0x00 };
			byte Default_eye_02_R2 [] = { 8, 8, 0x30, 0x38, 0x1F, 0x0F, 0x07, 0x41, 0x20, 0x1C };	
		
		// angry eye(basic type, Right side)
			byte circle_eye_R1 [] = { 8, 8, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0 };
			byte circle_eye_R2 [] = { 8, 8, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03 };

		
		// cute eyes(arrow style, Right side)
			byte cute_eye_R1 [] = { 8, 8, 0x70, 0xE0, 0x80, 0x00, 0x00, 0x80, 0xE0, 0x70 };
			byte cute_eye_R2 [] = { 8, 8, 0x00, 0x01, 0x07, 0x1E, 0x1E, 0x07, 0x01, 0x00 };

		// boring expression (Right side)
			byte boring_eye_R1 [] = { 8, 8, 0x80, 0xE0, 0xF0, 0xF8, 0xF8, 0xFE, 0xFF, 0xFF };
			byte boring_eye_R2 [] = { 8, 8, 0x0F, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF };

		// triangle expression (reverse_triangle, Right side)
			byte triangle_eye_R1 [] = { 8, 8, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x00 };
			byte triangle_eye_R2 [] = { 8, 8, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x1F, 0x00 };										

		// die expression (x eyes, Right side) 
			byte dying_eye_R1 [] = { 8, 8, 0x18, 0x30, 0x60, 0xC0, 0xC0, 0x60, 0x30, 0x18 };
			byte dying_eye_R2 [] = { 8, 8, 0x18, 0x0C, 0x06, 0x03, 0x03, 0x06, 0x0C, 0x18 };
			
		// dizzy expression (worm eyes, right side) 
			byte dizzy_eye_R1 [] = { 8, 8, 0xC0, 0x20, 0xA0, 0xA0, 0x20, 0xC8, 0x10, 0xE0 };
			byte dizzy_eye_R2 [] = { 8, 8, 0x03, 0x04, 0x09, 0x0A, 0x0A, 0x09, 0x04, 0x03 };
		
		
/* ----------------------------------------------------------------------------------------------------- */
/* ##################################################################################################### */
/* ----------------------------------------------------------------------------------------------------- */


		//Left side of the helmet
			byte noseLeft[] = { 8, 8, 0x7E, 0xFC, 0xC0, 0xC0, 0x80, 0x00, 0x00, 0x00 };
			byte icon01L[] = { 8, 8, 0x08, 0x1E, 0x7B, 0xE3, 0xFF, 0x00, 0x00, 0x00 };
			byte icon02L[] = { 8, 8, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1E, 0x78, 0xE0 };
			byte icon03L[] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x78, 0x1E, 0x07 };
			byte icon04L[] = { 8, 8, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x78, 0xE0, 0x80 };
			byte Glitch01L[] = { 8, 8, 0xA5, 0xD1, 0x47, 0x0A, 0x89, 0xD4, 0x0C, 0x00 };
			byte Glitch011L[] = { 8, 8, 0x00, 0x00, 0x00, 0xAB, 0xA1, 0x57, 0xE8, 0x20 };
			byte Glitch02L[] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0x12, 0x96, 0x4B, 0x74 };
			byte Glitch022L[] = { 8, 8, 0x00, 0x00, 0x00, 0x05, 0x12, 0x86, 0x54, 0xA2 };
			byte Glitch03L[] = { 8, 8, 0x00, 0x00, 0x00, 0x74, 0x2C, 0x4B, 0xA9, 0x29 };
			byte Glitch033L[] = { 8, 8, 0x00, 0x00, 0x00, 0x08, 0xA0, 0x69, 0x9A, 0x4D };
			byte Glitch04L[] = { 8, 8, 0x00, 0x00, 0xA9, 0x59, 0xE9, 0x57, 0x5D, 0x0B };
			byte Glitch044L[] = { 8, 8, 0x00, 0x00, 0x11, 0x06, 0x55, 0xD8, 0xA9, 0x80 };
	

	/*
							#========================================#
							#                                        #
							#     Modified mouth section (left)      #
							#                                        #
							#========================================#
	*/

		// die expression (modified mouth, left side)									
			byte dying_mouth_L1 [] = { 8, 8, 0xFF, 0xFF, 0x98, 0xB0, 0xB0, 0x20, 0xE0, 0xC0 };
			byte dying_mouth_L2 [] = { 8, 8, 0xFF, 0xFF, 0x0C, 0x06, 0x06, 0x02, 0x03, 0x01 };
			byte dying_mouth_L3 [] = { 8, 8, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dying_mouth_L4 [] = { 8, 8, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			
		// die expression (modified mouth, left side)
			byte dizzy_mouth_L1 [] = { 8, 8, 0x00, 0x00, 0xE0, 0xF8, 0x1E, 0x07, 0x01, 0x00 };
			byte dizzy_mouth_L2 [] = { 8, 8, 0x00, 0x00, 0x00, 0x07, 0x1E, 0x78, 0xE0, 0x00 };
			byte dizzy_mouth_L3 [] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
			byte dizzy_mouth_L4 [] = { 8, 8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

/* ----------------------------------------------------------------------------------------------------- */

	/*
							#========================================#
							#                                        #
							#     Modified eys section (left)       #
							#                                        #
							#========================================#
	*/
		// basic eye (left)
			byte Default_eye_01_L1 [] = { 8, 8, 0x00, 0x00, 0x18, 0x3C, 0x3F, 0x1F, 0x0F, 0x03 };
			byte Default_eye_01_L2 [] = { 8, 8, 0x00, 0x00, 0x06, 0x0E, 0xFC, 0xF8, 0xF0, 0xC0 };
			
		// sleepy expression (Left side)
			byte Default_eye_02_L1 [] = { 8, 8, 0x0C, 0x1C, 0xF8, 0xF0, 0xE0, 0x82, 0x04, 0x38 };
			byte Default_eye_02_L2 [] = { 8, 8, 0x60, 0xF0, 0xFF, 0x7F, 0x7F, 0x3F, 0x0E, 0x00 };
			
		// angry eye(basic type, Left side)
			byte circle_eye_L1 [] = { 8, 8, 0x03, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x03 };
			byte circle_eye_L2 [] = { 8, 8, 0xC0, 0xE0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xC0 };
	

		// cute eyes(arrow style, Left side)
			byte cute_eye_L1 [] = { 8, 8, 0x00, 0x80, 0xE0, 0x78, 0x78, 0xE0, 0x80, 0x00 };
			byte cute_eye_L2 [] = { 8, 8, 0x0E, 0x07, 0x01, 0x00, 0x00, 0x01, 0x07, 0x0E };

		// boring expression (Left eye)
			byte boring_eyes_L1 [] = { 8, 8, 0xF0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF };										
			byte boring_eyes_L2 [] = { 8, 8, 0x01, 0x07, 0x0F, 0x1F, 0x1F, 0x7F, 0xFF, 0xFF };	



		// triangle expression (reverse_triangle, Left side)
			byte triangle_eye_L1 [] = { 8, 8, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0x00 };							
			byte triangle_eye_L2 [] = { 8, 8, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x0F, 0x00 };

		// die expression (x eyes, Left side) 
			byte dying_eye_L1 [] = { 8, 8, 0x18, 0x30, 0x60, 0xC0, 0xC0, 0x60, 0x30, 0x18 };
			byte dying_eye_L2 [] = { 8, 8, 0x18, 0x0C, 0x06, 0x03, 0x03, 0x06, 0x0C, 0x18 };
			
		// dizzy expression (worm eyes, left side) 
			byte dizzy_eye_L1 [] = { 8, 8, 0xC0, 0x20, 0x90, 0x50, 0x50, 0x90, 0x20, 0xC0 };
			byte dizzy_eye_L2 [] = { 8, 8, 0x03, 0x04, 0x05, 0x05, 0x04, 0x13, 0x08, 0x07 };	
			

/* ----------------------------------------------------------------------------------------------------- */
/* ##################################################################################################### */
