MauvilleCity_PokemonCenter_1F_MapScripts:: @ 8210E5B
	map_script 3, MauvilleCity_PokemonCenter_1F_MapScript1_210E66
	map_script 5, MauvilleCity_PokemonCenter_1F_MapScript1_277C30
	.byte 0

MauvilleCity_PokemonCenter_1F_MapScript1_210E66: @ 8210E66
	setrespawn 5
	call MauvilleCity_PokemonCenter_1F_EventScript_2718DE
	goto MauvilleCity_PokemonCenter_1F_EventScript_210E74
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E74:: @ 8210E74
	special ScrSpecial_SetMauvilleOldManEventObjGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E78:: @ 8210E78
	setvar VAR_0x800B, 1
	call MauvilleCity_PokemonCenter_1F_EventScript_27191E
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E86:: @ 8210E86
	msgbox MauvilleCity_PokemonCenter_1F_Text_210EA1, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E8F:: @ 8210E8F
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F06, 2
	end

MauvilleCity_PokemonCenter_1F_EventScript_210E98:: @ 8210E98
	msgbox MauvilleCity_PokemonCenter_1F_Text_210F8A, 2
	end

MauvilleCity_PokemonCenter_1F_Text_210EA1: @ 8210EA1
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He’s funny in a weird way.\n"
	.string "I doubt I’ll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_210F06: @ 8210F06
	.string "Did you hear the rumor that Rick\n"
	.string " Astley is actually Red’s former\p"
	.string " Gastly that Red abandonned... \n" 
	.string "Eux... I mean that he left at \p" 
	.string "the Day Care in Kanto for over \n"
	.string "4 years alone... And lonely...\p" 
	.string " Without visiting him once...\l" 
	.string "I am sure Red has it’s reasons \n"
	.string "for not visiting him. but that\p" 
	.string "doesn’t mean he gave him up...\l"  
	.string "I mean Red will never gonna give \n" 
	.string "his POKéMON up, because we all\p" 
	.string " know that Red is the most \n" 
	.string "perfect trainer in POKéMON.\l" 
	.string "Right? \l" 
	.string "RIGHT??? \l"  		
	.string "PLEASE TELL ME I AM RIGHT??? \l" 
	.string "I hope this rumor is not true\n" 
	.string " because it would make Red a \p" 
	.string "careless trainer and I wont accept\n"  
	.string " this, so this rumor is fake news.\l"  
	.string "{PLAYER}: Then why did you even\p" 
	.string " bother to tell me that rumor if \n" 
	.string "it was fake right from the start\p"  
	.string " and waste my precious time???$" 
	
MauvilleCity_PokemonCenter_1F_Text_210F8A: @ 8210F8A
	.string "Sorry, just ignore what the other\n"
	.string "NPC said about Red and that rumor.\l"  
	.string "Just let’s continue to talk about \n"   
	.string "the Rick Astley and Red rumor.\l" 	 
	.string "Red didn’t abandon willingly Rick \n"  
	.string "Astley, but he was cursed by \p"  
	.string " Flareon to give him up for \n"    
	.string "Zapdos on Bloody Friday.\l" 	 
	.string "He was at the Day Care until a\n"
	.string " trainer requested a trade deal \p" 	 
	.string "to Red and he accepted it quicky\n"  
	.string ", thus Gastly was traded to the\p" 	   
	.string "trainer and it took care of him.\n" 	   
	.string "When it evolved into Gengar, he\p" 	   
	.string " got back all his memory from his\n"  
	.string " human life. Only it knew about it.\l" 	   
	.string "It felt soo bad about that Gengar, \n" 	   
	.string " so it went to the Helix church and\p" 	   
	.string " prayed to Lord Helix to make it’s \n" 	  	  
	.string "Gengar be able to learn the move \p"  
	.string "Transform, so he could permanently \n" 	   
	.string "transfrom back to his human form.\p" 	   
	.string "Surprisingly, Lord Helix appeared \n" 	   
	.string "and told it that he’d give it a \p" 	   
	.string "special TM move if it finds that \n" 	   
	.string "evil Flareon and fight it, catch it\p" 	   
	.string " and bring it to him.\l" 	   
	.string "So it did that with the help of Red\n" 	   
	.string "and was rewarded with that special \p" 	   
	.string " TM that only works with it.\l"   
	.string "It learned Gengar that special move\n" 	  
	.string " and he transformed back to his \p"  
	.string "former human form.\l" 
	.string "Even thought he’s living life like a \n"  
	.string "human again, the trainer still has to\p"  
	.string " carry it’s POKéBALL to protect him.\l"  
	.string "I think the rumor is very believable\n"  
	.string " , it’s not a coincidence that Rick\p" 
	.string " Astley came here right after Flareon\n" 
	.string " got defeated and got caught, as it \p"
	.string " caused soo much choas here too.$"

