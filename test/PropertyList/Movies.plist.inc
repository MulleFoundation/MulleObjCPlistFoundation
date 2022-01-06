   "{\n"
   "    Director = {\n"
   "        attributeNames = (movieID, talentID); \n"
   "        rows = (\n"
   "            (103, 91), \n"
   "            (215, 627)\n"
   "        ); \n"
   "    }; \n"
   "    Movie = {\n"
   "        attributeNames = (\n"
   "            category, \n"
   "            dateReleased, \n"
   "            movieID, \n"
   "            posterName, \n"
   "            rated, \n"
   "            revenue, \n"
   "            studioID, \n"
   "            title, \n"
   "            trailerName\n"
   "        ); \n"
   "        rows = (\n"
   "            (\n"
   "                Action, \n"
   "                \"Dec 27 1981 00:00\", \n"
   "                #102, \n"
   "                __NULL__, \n"
   "                G, \n"
   "                14400000, \n"
   "                7, \n"
   "                \"Raiders of the Lost Ark\", \n"
   "                __NULL__\n"
   "            ), \n"
   "            (\"Film-noir\", \"Dec 28 1931 12:00\", 113, __NULL__, G, 200"
   "000, 11, M, __NULL__), \n"
   "            (\n"
   "                Drama, \n"
   "                \"Sep 08 1993 00:00\", \n"
   "                215, \n"
   "                __NULL__, \n"
   "                __NULL__, \n"
   "                500000, \n"
   "                __NULL__, \n"
   "                \"Blue (Three Colors)\", \n"
   "                __NULL__\n"
   "            )\n"
   "        ); \n"
   "    }; \n"
   "    MovieRole = {\n"
   "        attributeNames = (movieID, roleName, talentID); \n"
   "        rows = (\n"
   "            (101, \"Han Solo\", 87), \n"
   "            (215, Olivier, 626)\n"
   "        ); \n"
   "    }; \n"
   "    PlotSummary = {\n"
   "        attributeNames = (movieID, summary); \n"
   "        rows = (\n"
   "            (111, __NULL__), \n"
   "            (\n"
   "                215, \n"
   "                \"Julie loses her husband, Patrice, a well-known compose"
   "r, and their young daughter, Anna, in an auto accident and must begin li"
   "fe anew. She decides to become anonymous and totally independent, and sh"
   "e deliberately cuts herself off from everything that she has possessed s"
   "o abundantly before. Olivier, Patrice's young assistant, has always love"
   "d Julie. To try and bring her out of isolation, he decides to finish the"
   " \\\"Concerto for Europe,\\\" that had been left unfinished at the  comp"
   "oser's death.\"\n"
   "            )\n"
   "        ); \n"
   "    }; \n"
   "    Studio = {\n"
   "        attributeNames = (budget, name, studioID); \n"
   "        rows = (\n"
   "            (5000000, \"Paramount Pictures\", 7), \n"
   "            (30000000, \"Apple Computer, Inc.\", 52)\n"
   "        ); \n"
   "    }; \n"
   "    Talent = {\n"
   "        attributeNames = (firstName, lastName, talentID); \n"
   "        rows = (\n"
   "            (Harrison, Ford, 87), \n"
   "            (\"Ben\\355it\", \"R\\335gent\", 626), \n"
   "            (Krzysztof, Kieslowski, 627)\n"
   "        ); \n"
   "    }; \n"
   "    TalentPhoto = {\n"
   "        attributeNames = (photo, talentID); \n"
   "        rows = (\n"
   "            (__NULL__, 87), \n"
   "            (\n"
   "                <ffd8ffe0 00104a46 49460001 02010048 00480000 ffed0af4 5"
   "0686f74 6f73686f 7020332e 30003842 494d03e9 00000000 00780003 00000048 0"
   "0480000 000002d8 0228ffe1 ffe202f9 02460347 052803fc 00020000 00480048 0"
   "0000000 02d80228 00010000 00640000 00010003 03030000 0001270f 00010001 0"
   "0000000 00000000 00000000 60080019 01900000 00000000 00000000 00000000 0"
   "0000000 00000000 00000000 00000000 00003842 494d03ed 00000000 00100048 0"
   "0000001 00010048 00000001 00013842 494d040d 00000000 00040000 00783842 4"
   "94d03f3 00000000 00080000 00000000 00003842 494d040a 00000000 00010000 3"
   "842494d 27100000 0000000a 00010000 00000000 00023842 494d03f5 00000000 0"
   "048002f 66660001 006c6666 00060000 00000001 002f6666 000100a1 999a0006 0"
   "0000000 00010032 00000001 005a0000 00060000 00000001 00350000 0001002d 0"
   "0000006 00000000 00013842 494d03f8 00000000 00700000 ffffffff ffffffff f"
   "fffffff ffffffff ffffffff ffff03e8 00000000 ffffffff ffffffff ffffffff f"
   "fffffff ffffffff ffff03e8 00000000 ffffffff ffffffff ffffffff ffffffff f"
   "fffffff ffff03e8 00000000 ffffffff ffffffff ffffffff ffffffff ffffffff f"
   "fff03e8 00003842 494d0408 00000000 00100000 00010000 02400000 02400000 0"
   "0003842 494d0414 00000000 00040000 00023842 494d040c 00000000 08df0000 0"
   "0010000 00400000 00510000 00c00000 3cc00000 08c30018 0001ffd8 ffe00010 4"
   "a464946 00010201 00480048 0000fffe 00264669 6c652077 72697474 656e2062 7"
   "9204164 6f626520 50686f74 6f73686f 70a82035 2e30ffee 000e4164 6f626500 6"
   "4800000 0001ffdb 0084000c 08080809 080c0909 0c110b0a 0b11150f 0c0c0f15 1"
   "8131315 13131811 0c0c0c0c 0c0c110c 0c0c0c0c 0c0c0c0c 0c0c0c0c 0c0c0c0c 0"
   "c0c0c0c 0c0c0c0c 0c0c0c01 0d0b0b0d 0e0d100e 0e10140e 0e0e1414 0e0e0e0e 1"
   "4110c0c 0c0c0c11 110c0c0c 0c0c0c11 0c0c0c0c 0c0c0c0c 0c0c0c0c 0c0c0c0c 0"
   "c0c0c0c 0c0c0c0c 0c0c0c0c ffc00011 08005100 40030122 00021101 031101ff d"
   "d000400 04ffc401 3f000001 05010101 01010100 00000000 00000300 01020405 0"
   "6070809 0a0b0100 01050101 01010101 00000000 00000001 00020304 05060708 0"
   "90a0b10 00010401 03020402 05070608 05030c33 01000211 03042112 31054151 6"
   "1132271 81320614 91a1b142 23241552 c1623334 7282d143 07259253 f0e1f163 7"
   "33516a2 b2832644 93546445 c2a37436 17d255e2 65f2b384 c3d375e3 f3462794 a"
   "485b495 c4d4e4f4 a5b5c5d5 e5f55666 768696a6 b6c6d6e6 f6374757 67778797 a"
   "7b7c7d7 e7f71100 02020102 04040304 05060707 06053501 00021103 21311204 4"
   "1516171 22130532 819114a1 b14223c1 52d1f033 2462e172 82924353 15637334 f"
   "1250616 a2b28307 2635c2d2 449354a3 17644555 367465e2 f2b384c3 d375e3f3 4"
   "694a485 b495c4d4 e4f4a5b5 c5d5e5f5 56667686 96a6b6c6 d6e6f627 37475767 7"
   "78797a7 b7c7ffda 000c0301 00021103 11003f00 e2ded78b 5e2621ee efe0e2a6 2"
   "c3de7f2 fe4562ca 6936bc44 1dc4483e 6a3f6269 fa2ffbc4 a702427d 3d6d1871 7"
   "70e93f1 45aaabae f5057ee3 4b0d9609 e1a0b59f f54f5b1d 03eaf62e 438e4f53 3"
   "386c861 13b1bbec f6d4e73d ff00b8df d2ff0081 a7fe1d6b 753a29e9 e3ecf84e c"
   "579ddad d4b1deab 60bad6b7 d6abf44d dbbbd9ef fd27f844 0e5ad123 1decf297 e"
   "364d1b4 5a0b5ce9 f64cb879 3dbfbcef dd4176f6 bb693ac0 3cf6700f 6ffd172d 5"
   "badca07 de77fd23 b00d378d 1ae66dfd e6bb6ffc 5a2d2fe9 791ecca0 c6bd8c6b 1"
   "d6b5801 7bcb7dcc d439ac65 31b1f93f ce6ff633 f4488cbd c20e32e2 071f12a4 d"
   "799007d eae755c0 7e3bdf91 a3692406 e9b41200 96d225ff 00a2afe8 7bf62a0d d"
   "5c08d44 f2355202 0ea18e40 83abffd0 c37e2b1d 6bccc4b8 f656ba5f 4839b9d4 e"
   "3024b5e e26c6b64 1d8c06cb 63fb2d50 78707991 064c81a8 92ba3fa8 f8aeb7ad 5"
   "97b81f4 b171de5c 78f75a45 4c6ff98d b938eca1 bbd474ae 874558ed 1756d20b 8"
   "582a23d a086b98c 1b0fee6f 576ce99d 34b007e3 31e1bc02 39333255 b1c08e13 5"
   "9b769dd a08e547c 23cd7711 bdc8f00f 3dd5ba37 47c96d8d aea65769 69076810 6"
   "7f7970f 93d1f11a 5cd60f6c 9dae693f e7095d5f 5bc9632e 6b719ec7 9b096b87 7"
   "9e357b8 ac020876 dfddede0 9d08f52d 9ad28fe2 f35d51d9 98f53705 f66ea882 4"
   "b201133 ed7b7787 6dfd1ffa 3596cac8 788d35ed a15d37d6 6aab38b8 59207bdc 6"
   "daddfd9 2cf4ff00 f3e3962f a3597889 1dfc53a8 0d9a933a 90ff00ff d1e7b2b2 2"
   "c6df782 e3b6b7bf 41a68095 e8bf523a 38c1aafb b6585f7d 750bb21c f96bded1 e"
   "b3aba71 f6fe8eba 3d6755ea fa8ff597 9c5cd71b ac913b9e e3f19257 a47d4dbc f"
   "54e9584 2f25b774 771a9ecd 4078dbfa a5fa7fc1 fb5dff00 08cb119d e94ba1c3 5"
   "207b687 b5787f5b e47a7bac 35d4e786 3ac2068c 60971fea 8716ae27 eb1756eb c"
   "db432dc 6b70ea3a b08bab6e e3cfb80f 5bfedbf5 1770486b 4b8e806a 5737d7be b"
   "461637a 9456c192 f68f735e 373011ac 6c77d27a 64abafd8 c9801274 8dff005b b"
   "3cad232 2fc7b323 6d8f6d23 75af2276 83fe95cc f6ac9bb3 6df58b89 beba81fa 4"
   "c607344 78fd17ff 009abd1b a9752e97 4f417635 d6d2db72 2883462e dfa4f6fe 6"
   "31a7dad ddfbeb81 acd5b88e 1ede7e1f bc88aef4 cc2e436a d7ed0d3e bb92f7f4 9"
   "c26921c 7d7b87a8 dd439a19 4d8cff00 a4e58ccc 9b370983 3a1edf91 69fd617b 4"
   "d189501 a8b2eb34 fdd2da59 ff0056d5 8a3e90f8 a78d9a99 07a8bfff d2ccca6d 3"
   "f67f536 090ee635 3f1842e9 5d6f37a3 db6df86e 733d4a9c cb1ad821 d1fa4a9d b"
   "6c0f66e ade3f9cd bbd8c7d8 8b961cee 9ed7770c 638fc035 aaae0e33 b31afaea 9"
   "73db593 004f8fd2 3f9a883a 77b2551d 0df67d6f aae45bfb 30d94c7a 96b59b4f 6"
   "1ea47bb fb3b979c 66557e1e 616de1cf 735d0f7e e6c077ef 173f6fb5 d3fce2f4 4"
   "ac5d4f4 ac3fb4b0 b6c18f53 6f67e735 e18ddffd 6dae4f46 3e1d8cfb 5d54d373 8"
   "c3c3cb5 ae717b47 a41cdb4f b9aff6a8 89f53621 2e18d78b e6669f55 bebd2d1b 1"
   "c0eeb18 ea883103 df632cfc d739071f dee2f66e 02b25b2e 1a1dba1d a7f39bb9 6"
   "b75fc3c d1d45dfb 4c566e77 b8168ac9 da4fb77b ea635dbb fe3165e4 5ff66a7f 4"
   "4cf52d3 a555b449 73b9fa23 f359f49e 96e74bd5 989a1762 9c9eb190 5d986a68 9"
   "6d0d15c ff0028fe 92dffa4e d8a980fb 1d5b4309 7b9c1ad0 d125c5c7 6b18d6b7 d"
   "ce7b9c8 8ea9c5ef de65e0fb 8c82777e 7f7fde5a dd1efc2c 0a9f981e 1dd58934 e"
   "130c866 3b1c3f4d d45f6edd 8fca737f 43895b1f fa0fe794 e226aa8f d8d09cac 9"
   "9777fff d3862330 2fa5ad1b 72eb115e eb0915c3 40ae5f45 7e9d9eed bf42eb19 5"
   "a3e2f55 b69c9f44 16bd98ef 63d94b40 6b21ae16 57fa2ac3 6a637d9b 3d9f4171 2"
   "e743cb8 1dae9d08 307fce0a de17502d ca16e459 1b59b038 8d342237 6dff00aa f"
   "f0048ad 42500384 4786f75b c241bbba 7da326fa b270d991 49df55cd dec3e4e0 b"
   "8cea99b d43a5de7 3ba6e4fa 5ebb9deb e39f734b ff00d2fa 6ef6eefe 533f48aa 7"
   "49fad76 f4babd1b 1bf6bc07 92e2c691 beb7132e b71dff00 41ed7fd2 7d0fff00 a"
   "daa7d47 aa74ecec 8764577b 031c068f 3b1c3c9f 559f4555 c9865196 d71eed9c 3"
   "3898d1d 0f8b5edc ecdc8b1f 75d0fb2c d5f61f15 89d61c7e d35b099d b5ebf173 9"
   "ce5a37f 52c0a46b 70b638ae bf713f3f a1ff0049 6164e4bf 2721d738 6d2e8868 e"
   "001a31a 96306efb 2734870d 5d9621fa ca935ee2 e13e286d e029b7e9 052d96b3 f"
   "fd4e39d f4cfc4a7 5cd24a50 a7b9c0fe 8757c1ff 0095cb33 37fa42e6 524fc9f2 4"
   "568dcbd 078266ff 00158092 624bd037 e88531f4 c7c42e71 24145fff d9003842 4"
   "94d0406 00000000 00070006 00000001 0100ffe2 0c584943 435f5052 4f46494c 4"
   "5000101 00000c48 4c696e6f 02100000 6d6e7472 52474220 58595a20 07ce0002 0"
   "0090006 00310000 61637370 4d534654 00000000 49454320 73524742 00000000 0"
   "0000000 00000000 0000f6d6 00010000 0000d32d 48502020 00000000 00000000 0"
   "0000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 0"
   "0000000 00000011 63707274 00000150 00000033 64657363 00000184 0000006c 7"
   "7747074 000001f0 00000014 626b7074 00000204 00000014 7258595a 00000218 0"
   "0000014 6758595a 0000022c 00000014 6258595a 00000240 00000014 646d6e64 0"
   "0000254 00000070 646d6464 000002c4 00000088 76756564 0000034c 00000086 7"
   "6696577 000003d4 00000024 6c756d69 000003f8 00000014 6d656173 0000040c 0"
   "0000024 74656368 00000430 0000000c 72545243 0000043c 0000080c 67545243 0"
   "000043c 0000080c 62545243 0000043c 0000080c 74657874 00000000 436f7079 7"
   "2696768 74202863 29203139 39382048 65776c65 74742d50 61636b61 72642043 6"
   "f6d7061 6e790000 64657363 00000000 00000012 73524742 20494543 36313936 3"
   "62d322e 31000000 00000000 00000000 12735247 42204945 43363139 36362d32 2"
   "e310000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 0"
   "0000000 00000000 00000000 00000000 00000000 58595a20 00000000 0000f351 0"
   "0010000 000116cc 58595a20 00000000 00000000 00000000 00000000 58595a20 0"
   "0000000 00006fa2 000038f5 00000390 58595a20 00000000 00006299 0000b785 0"
   "00018da 58595a20 00000000 000024a0 00000f84 0000b6cf 64657363 00000000 0"
   "0000016 49454320 68747470 3a2f2f77 77772e69 65632e63 68000000 00000000 0"
   "0000000 16494543 20687474 703a2f2f 7777772e 6965632e 63680000 00000000 0"
   "0000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000 0"
   "0000000 00000000 64657363 00000000 0000002e 49454320 36313936 362d322e 3"
   "1204465 6661756c 74205247 4220636f 6c6f7572 20737061 6365202d 20735247 4"
   "2000000 00000000 00000000 2e494543 20363139 36362d32 2e312044 65666175 6"
   "c742052 47422063 6f6c6f75 72207370 61636520 2d207352 47420000 00000000 0"
   "0000000 00000000 00000000 00000000 64657363 00000000 0000002c 52656665 7"
   "2656e63 65205669 6577696e 6720436f 6e646974 696f6e20 696e2049 45433631 3"
   "936362d 322e3100 00000000 00000000 00002c52 65666572 656e6365 20566965 7"
   "7696e67 20436f6e 64697469 6f6e2069 6e204945 43363139 36362d32 2e310000 0"
   "0000000 00000000 00000000 00000000 00000000 00000000 76696577 00000000 0"
   "013a4fe 00145f2e 0010cf14 0003edcc 0004130b 00035c9e 00000001 58595a20 0"
   "0000000 004c0956 00500000 00571fe7 6d656173 00000000 00000001 00000000 0"
   "0000000 00000000 00000000 0000028f 00000002 73696720 00000000 43525420 6"
   "3757276 00000000 00000400 00000005 000a000f 00140019 001e0023 0028002d 0"
   "0320037 003b0040 0045004a 004f0054 0059005e 00630068 006d0072 0077007c 0"
   "0810086 008b0090 0095009a 009f00a4 00a900ae 00b200b7 00bc00c1 00c600cb 0"
   "0d000d5 00db00e0 00e500eb 00f000f6 00fb0101 0107010d 01130119 011f0125 0"
   "12b0132 0138013e 0145014c 01520159 01600167 016e0175 017c0183 018b0192 0"
   "19a01a1 01a901b1 01b901c1 01c901d1 01d901e1 01e901f2 01fa0203 020c0214 0"
   "21d0226 022f0238 0241024b 0254025d 02670271 027a0284 028e0298 02a202ac 0"
   "2b602c1 02cb02d5 02e002eb 02f50300 030b0316 0321032d 03380343 034f035a 0"
   "3660372 037e038a 039603a2 03ae03ba 03c703d3 03e003ec 03f90406 04130420 0"
   "42d043b 04480455 04630471 047e048c 049a04a8 04b604c4 04d304e1 04f004fe 0"
   "50d051c 052b053a 05490558 05670577 05860596 05a605b5 05c505d5 05e505f6 0"
   "6060616 06270637 06480659 066a067b 068c069d 06af06c0 06d106e3 06f50707 0"
   "719072b 073d074f 07610774 07860799 07ac07bf 07d207e5 07f8080b 081f0832 0"
   "846085a 086e0882 089608aa 08be08d2 08e708fb 09100925 093a094f 09640979 0"
   "98f09a4 09ba09cf 09e509fb 0a110a27 0a3d0a54 0a6a0a81 0a980aae 0ac50adc 0"
   "af30b0b 0b220b39 0b510b69 0b800b98 0bb00bc8 0be10bf9 0c120c2a 0c430c5c 0"
   "c750c8e 0ca70cc0 0cd90cf3 0d0d0d26 0d400d5a 0d740d8e 0da90dc3 0dde0df8 0"
   "e130e2e 0e490e64 0e7f0e9b 0eb60ed2 0eee0f09 0f250f41 0f5e0f7a 0f960fb3 0"
   "fcf0fec 10091026 10431061 107e109b 10b910d7 10f51113 1131114f 116d118c 1"
   "1aa11c9 11e81207 12261245 12641284 12a312c3 12e31303 13231343 13631383 1"
   "3a413c5 13e51406 14271449 146a148b 14ad14ce 14f01512 15341556 1578159b 1"
   "5bd15e0 16031626 1649166c 168f16b2 16d616fa 171d1741 17651789 17ae17d2 1"
   "7f7181b 18401865 188a18af 18d518fa 19201945 196b1991 19b719dd 1a041a2a 1"
   "a511a77 1a9e1ac5 1aec1b14 1b3b1b63 1b8a1bb2 1bda1c02 1c2a1c52 1c7b1ca3 1"
   "ccc1cf5 1d1e1d47 1d701d99 1dc31dec 1e161e40 1e6a1e94 1ebe1ee9 1f131f3e 1"
   "f691f94 1fbf1fea 20152041 206c2098 20c420f0 211c2148 217521a1 21ce21fb 2"
   "2272255 228222af 22dd230a 23382366 239423c2 23f0241f 244d247c 24ab24da 2"
   "5092538 25682597 25c725f7 26272657 268726b7 26e82718 2749277a 27ab27dc 2"
   "80d283f 287128a2 28d42906 2938296b 299d29d0 2a022a35 2a682a9b 2acf2b02 2"
   "b362b69 2b9d2bd1 2c052c39 2c6e2ca2 2cd72d0c 2d412d76 2dab2de1 2e162e4c 2"
   "e822eb7 2eee2f24 2f5a2f91 2fc72ffe 3035306c 30a430db 3112314a 318231ba 3"
   "1f2322a 3263329b 32d4330d 3346337f 33b833f1 342b3465 349e34d8 3513354d 3"
   "58735c2 35fd3637 367236ae 36e93724 3760379c 37d73814 3850388c 38c83905 3"
   "942397f 39bc39f9 3a363a74 3ab23aef 3b2d3b6b 3baa3be8 3c273c65 3ca43ce3 3"
   "d223d61 3da13de0 3e203e60 3ea03ee0 3f213f61 3fa23fe2 40234064 40a640e7 4"
   "129416a 41ac41ee 42304272 42b542f7 433a437d 43c04403 4447448a 44ce4512 4"
   "555459a 45de4622 466746ab 46f04735 477b47c0 4805484b 489148d7 491d4963 4"
   "9a949f0 4a374a7d 4ac44b0c 4b534b9a 4be24c2a 4c724cba 4d024d4a 4d934ddc 4"
   "e254e6e 4eb74f00 4f494f93 4fdd5027 507150bb 51065150 519b51e6 5231527c 5"
   "2c75313 535f53aa 53f65442 548f54db 55285575 55c2560f 565c56a9 56f75744 5"
   "79257e0 582f587d 58cb591a 596959b8 5a075a56 5aa65af5 5b455b95 5be55c35 5"
   "c865cd6 5d275d78 5dc95e1a 5e6c5ebd 5f0f5f61 5fb36005 605760aa 60fc614f 6"
   "1a261f5 6249629c 62f06343 639763eb 64406494 64e9653d 659265e7 663d6692 6"
   "6e8673d 679367e9 683f6896 68ec6943 699a69f1 6a486a9f 6af76b4f 6ba76bff 6"
   "c576caf 6d086d60 6db96e12 6e6b6ec4 6f1e6f78 6fd1702b 708670e0 713a7195 7"
   "1f0724b 72a67301 735d73b8 74147470 74cc7528 758575e1 763e769b 76f87756 7"
   "7b37811 786e78cc 792a7989 79e77a46 7aa57b04 7b637bc2 7c217c81 7ce17d41 7"
   "da17e01 7e627ec2 7f237f84 7fe58047 80a8810a 816b81cd 82308292 82f48357 8"
   "3ba841d 848084e3 854785ab 860e8672 86d7873b 879f8804 886988ce 89338999 8"
   "9fe8a64 8aca8b30 8b968bfc 8c638cca 8d318d98 8dff8e66 8ece8f36 8f9e9006 9"
   "06e90d6 913f91a8 9211927a 92e3934d 93b69420 948a94f4 955f95c9 9634969f 9"
   "70a9775 97e0984c 98b89924 999099fc 9a689ad5 9b429baf 9c1c9c89 9cf79d64 9"
   "dd29e40 9eae9f1d 9f8b9ffa a069a0d8 a147a1b6 a226a296 a306a376 a3e6a456 a"
   "4c7a538 a5a9a61a a68ba6fd a76ea7e0 a852a8c4 a937a9a9 aa1caa8f ab02ab75 a"
   "be9ac5c acd0ad44 adb8ae2d aea1af16 af8bb000 b075b0ea b160b1d6 b24bb2c2 b"
   "338b3ae b425b49c b513b58a b601b679 b6f0b768 b7e0b859 b8d1b94a b9c2ba3b b"
   "ab5bb2e bba7bc21 bc9bbd15 bd8fbe0a be84beff bf7abff5 c070c0ec c167c1e3 c"
   "25fc2db c358c3d4 c451c4ce c54bc5c8 c646c6c3 c741c7bf c83dc8bc c93ac9b9 c"
   "a38cab7 cb36cbb6 cc35ccb5 cd35cdb5 ce36ceb6 cf37cfb8 d039d0ba d13cd1be d"
   "23fd2c1 d344d3c6 d449d4cb d54ed5d1 d655d6d8 d75cd7e0 d864d8e8 d96cd9f1 d"
   "a76dafb db80dc05 dc8add10 dd96de1c dea2df29 dfafe036 e0bde144 e1cce253 e"
   "2dbe363 e3ebe473 e4fce584 e60de696 e71fe7a9 e832e8bc e946e9d0 ea5beae5 e"
   "b70ebfb ec86ed11 ed9cee28 eeb4ef40 efccf058 f0e5f172 f1fff28c f319f3a7 f"
   "434f4c2 f550f5de f66df6fb f78af819 f8a8f938 f9c7fa57 fae7fb77 fc07fc98 f"
   "d29fdba fe4bfedc ff6dffff fffe0026 46696c65 20777269 7474656e 20627920 4"
   "1646f62 65205068 6f746f73 686f70a8 20352e30 ffee000e 41646f62 65006440 0"
   "0000001 ffdb0084 00020202 02020202 02020203 02020203 04030202 03040504 0"
   "4040404 05060505 05050505 06060707 08070706 09090a0a 09090c0c 0c0c0c0c 0"
   "c0c0c0c 0c0c0c0c 0c010303 03050405 09060609 0d0a090a 0d0f0e0e 0e0e0f0f 0"
   "c0c0c0c 0c0f0f0c 0c0c0c0c 0c0f0c0c 0c0c0c0c 0c0c0c0c 0c0c0c0c 0c0c0c0c 0"
   "c0c0c0c 0c0c0c0c 0c0cffc0 00110800 51004003 01110002 11010311 01ffdd00 0"
   "40008ff c401a200 00000701 01010101 00000000 00000000 04050302 06010007 0"
   "8090a0b 01000202 03010101 01010000 00000000 00010002 03040506 0708090a 0"
   "b100002 01030302 04020607 03040206 02730102 03110400 05211231 41510613 6"
   "1227181 143291a1 0715b142 23c152d1 e1331662 f0247282 f1254334 5392a2b2 6"
   "373c235 442793a3 b3361754 6474c3d2 e2082683 090a1819 84944546 a4b456d3 5"
   "5281af2 e3f3c4d4 e4f46575 8595a5b5 c5d5e5f5 66768696 a6b6c6d6 e6f63747 5"
   "7677787 97a7b7c7 d7e7f738 48586878 8898a8b8 c8d8e8f8 29394959 69798999 a"
   "9b9c9d9 e9f92a3a 4a5a6a7a 8a9aaaba cadaeafa 11000202 01020305 05040506 0"
   "4080303 6d010002 11030421 12314105 51136122 06718191 32a1b1f0 14c1d1e1 2"
   "3421552 6272f133 24344382 16925325 a263b2c2 0773d235 e2448317 54930809 0"
   "a181926 36451a27 64745537 f2a3b3c3 2829d3e3 f38494a4 b4c4d4e4 f4657585 9"
   "5a5b5c5 d5e5f546 56667686 96a6b6c6 d6e6f647 57677787 97a7b7c7 d7e7f738 4"
   "8586878 8898a8b8 c8d8e8f8 39495969 798999a9 b9c9d9e9 f92a3a4a 5a6a7a8a 9"
   "aaabaca daeafaff da000c03 01000211 0311003f 00f015ed b5f43a9e ac865685 a"
   "3d4af83 16760014 b9908353 5afcf2ef 1e142cf4 6ffcbce4 4d01f04e 62d518d4 4"
   "86e631b 9e42b2a9 07de32cd b7bae64c 75b88fd5 b153a4ca 09d87c08 4d6deeda e"
   "6a2def7 d673bd16 43cc1edf 0310dbfc b2f867c7 2fa640b4 4a261cfa 275a5e9d a"
   "c6b4dac 47a656e6 4d034d97 56d563f5 18325b43 343039dc 6cdce751 46a77deb b"
   "64e5211 009e4bcf 9267ae79 6bccfe5e fa9c7ab5 bc96d717 41cb69c9 23497301 0"
   "54049e3 00717903 065404b5 2b502991 8e48cb91 4ce2431d b87bbb79 feaf24ec 6"
   "5f4e19a 8aec418e e218ee23 604d2a1a 3954e580 83f8ee34 d24eea09 3cac4729 a"
   "42ac030 1c98555c 554efd88 208f6c2c 24374c60 bc712c29 13b0aba0 2e59b6a3 0"
   "3b1aedd 30007aa3 7eafffd0 f28ea3a0 e8afa9ea 69f56786 74bdb843 3452b066 a"
   "cccc4b2 d78127bd 140cb00f 4807b99c a52e23bf 540ff816 de603eab aab21040 0"
   "b3c2afb 57f99483 f70c0620 8e4c86a7 200fa2bf 233fe71f 3cb3e609 e4f34fe6 b"
   "5d2cfe4 6b002cde cde4fa85 abddea64 45672cb3 dc6e5614 e53fc4d0 c4d54acc b"
   "df13539 a18b9fbb f6b9b09e 49c7d23f 01f437e6 2691a3fe 5e47fe1f f245d793 6"
   "e661724 49e61d0e c2e46a96 aa93c979 1c46fad3 8c09c039 58d43b73 34791182 d"
   "331ff00 322f6972 fc5db386 194f7a22 fe5fadf3 26afaaf9 a2195def a55bf35b b"
   "9ce9b02 15805e42 784525b8 882a9692 39150b56 ad1ad2ab c472b233 d890c258 b"
   "879a6ba 2dff00e5 8f98de4b 3f3641a7 d9ea3a76 9f6f6377 aedb58c1 14f7d7b3 d"
   "b932db9 e6922451 da0448a4 bb0bea33 f18d3846 84b4a1ab cd0140db 5cb103e6 f"
   "37fcd3f 22dd796a f353f318 3058e813 4d0c56e5 a2fab44f 224481a3 b145798f a"
   "102f18f 94be9d02 548f894b 6db4bad8 4808c8fa 9c2cd808 36393cb2 cc3493db 4"
   "911f5a3 6917f791 90ebd76d d6a33643 71b6ee21 bb7fffd1 e4d77e57 b4bbd4f5 2"
   "94b88da 7bd99883 1d68198b 0219594d 3c2be397 44580477 04195c8f bcf3e7f1 6"
   "67f96bf 94ade74f 39f973cb 6269a6b2 bdb979b5 5b5b6f51 27361671 3dcdd706 a"
   "b539227 0db7f8b6 df2390f0 4493d032 c74654fd 85fcb7fc a0d174bd 12d5356d 2"
   "6d5a07b b87528b4 5920adbc 6d1412c3 0a181805 a46b2ec1 abc77e8c 5b35d1c3 e"
   "29129f2 72f26738 cfa0d1aa 7a35f7e5 e7901ed1 12f7ca3a 7dec701a ac732579 3"
   "b3f32ce 2a013cb7 a9e9db6c b8e9f181 f4844759 9e46b8ce ef05fccc fca7fcab f"
   "325bea7 6f65a158 699aa4d6 d247225b a22c4e5c 82a650a3 9302791a fb57b653 7"
   "11c83b5 d299c87e f370fcd3 f30fe4ef 94e292ea 0b389d20 6b87faad f5bcb29e 4"
   "558a891 0386522b 522a0edd b3650c11 90ee6d96 08907a3e 65fcd997 ce9e5ad2 b"
   "4ff0020 5e6b2f73 a24914cf 75a7b409 3c5eaf31 e8dc21b8 8e511f28 0d144451 9"
   "096a31c aa3a5e19 7a86e3ee 749a991c 6787a3e7 cb1d31ad ef2dda16 5b76f552 a"
   "63631ba 9af42569 5cca881d 3621c1e2 12e96fff d289dda5 cade4fea 44a927ad 2"
   "35c470d 1d39b93c 95490a69 df751f21 9923906b 3b937de5 f59ffce1 e796ee35 1"
   "fce0d53 5cb88a45 d2bc99e5 7bc92ea6 0bc2b73a b4b1db5b a52a3ac5 15c36c36 e"
   "22bd465 59e5e96d 807eab25 02205002 851c4740 053614ed 9504285e 8885bca6 7"
   "611a702 3d523ecd 41dc5698 2554cf1d 990ae6f8 57f377cc 1676baa5 a5b797af b"
   "4ebf975 396682f2 dd947aa1 c9645679 a47a8018 ec36a6d8 7063123e e7a88424 2"
   "00c810f 975e378a 7f400e46 d88568ea 094a1e95 0483d333 6543aa64 7bde13ff 0"
   "03939a7 583f967f 2dbccab1 83a84f71 ab6997af 4a6d6f2d b1b761e0 78dc3afd 1"
   "5c94a5c 437f73cf f6802243 77cc4ba1 e9cf7910 89a5857e 0902b307 de9c891c 9"
   "6bd4529 5caf8767 54490fff d3e0be66 f306a56f ae79a04b 7d325a69 5a96a3c5 2"
   "13e9968 e096415a ad09242f 8e66f08a 1ee1cd8c 63f8e9f0 7eb9ff00 ce1bfe51 a"
   "f912c3c d1ac49a6 6a536a5e 66d2b44b 7f3179be e752f5ad 6fef2de3 6bd96dac b"
   "4e31030 c368f7af 0aca6473 3712cd46 d86b38e5 949f4811 e86f73ef 1dfee76f a"
   "ed262d2 e1c2464b c938f14a 3c35c00f d3eab366 43722870 ec377db1 aadebd86 9"
   "d79790d 85dea724 1193169f 608b25c4 a4ec046a ec8a4efd d864e678 6248165d 6"
   "e2871c8 0240bea7 93f37ff3 ebf343f3 badb5382 cb54f25e afe47d1a 4225b0b9 8"
   "f5dd32d 0dc305e4 3d444fad ab3103fb b69763e1 9aef0a72 de721c5d d67f40a7 a"
   "5d26970 d5e21e27 79eef86c 7e2f0fd2 575dd774 1d5fcc2d 6baa6a16 de5f8c5d 6"
   "b97f341 cdad51d8 806ea587 927626b5 f7e99998 6338d827 9396211b 006d7c81 f"
   "2ddf3f6 b3e75d5f f4bc9712 c9e66d2b 4485d80b bb0d392e 60458896 62e9c926 6"
   "14dea81 988fb20e 1c73cd11 c563f4b8 794832e1 f50bea3e 9f8a41f9 f3e69bcb f"
   "f00caaf cae8659a 2b82fe6a d793f4bd b1e715ed a4561617 307da150 55e4e447 5"
   "da876a8 ccec398e 48f1174d da10e134 4dbe6cb3 f366a0b7 717ac2de e0ccde9c 8"
   "191a3f8 5815dbd3 206d5db6 cbaa86ee a8c1ffd4 f3bead6b 3beb5adf 387d55ba b"
   "fbc76df 90904b33 d4902bf6 ab4e999a 390f7059 48191e5c fa7ed7ec 27fce236 a"
   "f2fe677 e597e5c4 1e619ae6 db5dfc88 b86d22fb 4f6e489a 8c3f550b a36a2c52 9"
   "c985bfc 0f5fb52a 495da95d 667d309e 58ce5fc3 b81d37eb ef0ec63a ef0f0e48 c"
   "4027288 8b3ce3c2 7703dffa 9f6f4b2c 7042f34c dc23894b 3b1f01fa f272908e e"
   "5d7c626 4401cdf2 17e74ffc e477947c b2354d1a c74e8bcd 77b6d113 7365730a d"
   "d5aa3a2 97082170 cb248dd0 01d2bb9c a3267901 707a6ecd eca31025 925c03c8 d"
   "1fd6c8b cfde7dfc b8d23f25 af7cb3ac eb9a1dae a9e66f2d 086e7cb9 e541053e b"
   "57b6c0b 3410237c 09cdb667 22a37c27 300289b9 6d7fb7b9 c5d26973 cb55e280 7"
   "8413bcb bb97bc9f 73f2db4d 974b33cb 00261bfb 6a7d60ad 47246a71 916bd2bd 0"
   "8073323 a8c5641d eb91ef0e e063354f 0aff009c 8fbdb793 46fcb9d2 60b7fdfc 5"
   "a9f9875 35318d85 ac96fa75 bd280004 bcaa589e bf0e5b88 8b3c3c9e 73b50786 6"
   "23a9bfb 1f2e4154 bab70e0e f2a506df 66a3bd4f 7cb4936e a6dfffd5 8bf9a60d 1"
   "c682daa 1d321334 573c5e56 88067f88 a90ee86a 41a57ae4 f0ca4334 81681391 3"
   "ccfc58b 7e5afe71 79bff273 51d73cc5 e50b8beb 3fd21a1d e59eab69 6855e3ba f"
   "44fd66c e568ee52 6883c12a 151270e6 91c9205d db279a22 51aba23f b5d869a7 5"
   "31c4048 5f23cbe3 547ed0fd d9fcc9d6 f51ff957 f35fe8c2 1fd23ab5 a59adaca 5"
   "58c3135 f05532d2 84f14f52 b4cd5ea4 9229b343 0fded9e8 fc86f366 9dad7937 c"
   "d9243af 4373a95c da5c9875 3d505c5b 8860ba60 adcdde66 425240ff 000c94a0 f"
   "dae3518 e0f48321 bd7cfe4f 4a72999b deba5027 ee63074b fd316dfe 20d0f4fb 7"
   "3637b1b b5e6b9a6 dd6912c5 2b232213 3dcdb5e0 04c6f201 46f88127 0e5b97aa b"
   "9efd3f4 301a9c71 3c272511 d0895fca 98d797f8 ea135c5f d89b9893 49965b3f 5"
   "2ea2e11 cc2d9ca4 9e938621 d39d42b0 d891b546 f94cafa6 cdbe2ef6 3bbf63c0 3"
   "f38fcc5 25cf9d26 d2aded56 e6dbcaf6 70e98255 715fad38 fadde556 9b719255 8"
   "ceffb04 66df480c 71efccbc c76acf8f 5047f345 7eb798a9 bad4a7d1 615d2ae2 4"
   "bcb9bc8 2ced21b6 8bd67b99 ee2548e0 b786184b 4924b23b 0544552c c4d14139 9"
   "64ed6eb 80a2ff00 ffd68c79 a23b8baf cbdb3b82 143a69b6 37570b52 39449691 3"
   "96ec090 0d477390 d211e2ca b96e5c6e 53f89603 e47f2dcb e78b5d47 4fd28bdf 5"
   "eda6952 c8c96e9e a0e2dcd0 891c1e31 8006e588 1964c71c c88ef67a 72f793c8 0"
   "ef2e6f8 928f0902 cbf7734d 4d5b49fc b5f211f3 2d8cd6da 945e55d1 edfccba6 3"
   "10d3db5 ea59c4b3 0a2f20ec 8e0a9e3e 1519819c 511ee737 11e2c92e 1e84d7ba d"
   "5f47d0b ca9a85b3 79af4bd0 b44d7aee 7f46f23d 45adede7 9def6da1 5b54923b a"
   "652cb22 aa503721 c77f7395 c4c80f4b 39669c64 2064620e db13caef 71d43f2f 3"
   "f3bbc9f e6b5f3f5 dffcaceb 7d26e35d ba43736d 2dbdbe97 2cff0056 99c98d65 9"
   "ad6de37 675e343e ad58ec41 237c9013 1fc567ab d4e1d546 58c1c607 06f5b11f 7"
   "9277e7d 03c47cc9 ae7f8574 5a68da5c 9aceb729 30e83a25 9c4d712d c5d5392f e"
   "ee305cc 71280f21 a74a0ea4 65b834f9 33cb8631 32efa75d aad40c60 c89e9b7b d"
   "f244da2 5d4d7ba8 a5ec82e3 5382726f a513c32b b5cbb17b 96765908 24c85aa4 1"
   "a7866ef f2f9a3b0 8dd6db53 ca4e5296 fd4f37bf 7e516a1e 55f20dae a1e755d5 2"
   "0b8fce3 691f42fc b0d32712 a69fe56b 3b88ca5f f9a2e2f1 a25865be 9119adec a"
   "38dc984 1695ea64 e297cb41 9efd406d e61c7c82 4079bfff d79d7943 4bfcbff3 1"
   "e8b696b 09b5f3ee 9712c7a5 7d63519a 54d39e1b 444b6e53 e9d6ab04 ccd208d4 9"
   "49e4441 5a508ce9 347d8b83 148e4e23 33f088f8 0fd6d33c 644bd5cf 9fcd98f9 7"
   "3f326ff 0046d765 f2ec735a ddd9795a f2c6fb4a f2fda430 dad99486 74b9b55f a"
   "adba476 f121688c 6aa8b44a 0ea4723b 0d461197 14b08fe6 d7eafb79 b918e84a 3"
   "237e7f7 7e97e97e bdac69fe 61f2c586 bfa44e2f 749d6ed1 6f34f9d7 a18e64a8 2"
   "d4ad196 b423ad6a 3ae79fea 818ca8f3 fb9cdd0c 6a6625f9 dff99be6 df3cfe58 6"
   "af379e3 f2d3cde3 463e63bc b85f3379 4e7513db 4f787637 7f5692a8 5da9c8bc 7"
   "c5d4712 d5a90288 c048771e f7759305 8dc587ca 7a879d3c e7e62bed 4359d692 2"
   "bfd4352 6e57dabc c28a5d45 050014db b01d3104 8d839032 4e42ab67 cb9f9cd7 4"
   "ffe27d1 6c9e5699 adb44067 3520fa97 37334849 20ed5f4d 4e6f3b38 70e3b079 c"
   "abecfd6 e97b507e f003ddf7 bc963d41 c3ace1b8 bbf0603c 08006dec 299b0198 f"
   "305d612 7a2656da 85cc9736 cceedc83 a7c5c8d6 bc86e3dc 0c3e3c90 ff00ffd0 f"
   "0b5c5d3 2ddcb770 dc35a5e8 90fa3756 f27a7371 e540c258 c861b8e9 5cdcc272 1"
   "c8b955d 3a3d27c8 ff009952 41e6eb6d 67cd7ae0 b736da63 69c9a84b 19489c23 c"
   "65166f4 81e21943 10f40bea 2a16ea73 374fa9fd e5ccf4af 7b0c91f4 d56d77f1 7"
   "de9f96f ff00392f a8fe5969 c34cbfb5 3e77fcbd be77bbb9 b0b49231 7ba75c4b 2"
   "33cb75a 64cc7d29 5253577b 77214b7c 48c096e5 1ed2ecd8 6ae3c40d 4bbfa7c5 8"
   "e0cb284 813f80f3 8f3ffe67 fe5df9eb 5dbbf31e 9de69d39 2c678a36 f42fa65d 3"
   "eea0a9d d2e2cee4 aba302c2 a07253d4 3107399f e4fcd886 e01f389b fb39fcde 8"
   "e1adc33 8d7157bc 57daf11d 77f33bf2 fb4584fa 9e688b5f 743ca0d2 747add4a e"
   "c3a2f35 a42a36a5 5dc0198f 1d2659c8 6d43bced fdaca7ad c3887307 dcf917cc d"
   "e65bcf3 5f98350d 7af205b6 9efe44fa bda44c4c 76f046a2 382053b7 3e282ac6 9"
   "bb12737 b8710c70 11bba3f3 743a9ca7 2e4333b7 924f6a09 8e0d8a14 144a0047 5"
   "35dce4c 46801dcd 169bda53 eb30efb1 75f8bc7e 21b8c898 b1e13d5f ffd1f105 d"
   "7fbd92f fc667ff8 91cd886f 451fb27f d4fe0732 47d2ccf2 7d07f973 ff002856 8"
   "1ff0018 750ff93d 2e6d34bf 4068c8f0 1f3eff00 ca4cbfea 8ff89e69 f55f5966 3"
   "e93ee62 47ac7fec 72304450 f6fd7fe7 a648736a 1f57cd11 69fef2a7 faebfa8e 0"
   "6c299c3 fef5db7f cc4c7fad 704b9358 faa3f17f ffd9>, \n"
   "                628\n"
   "            ) \n"
   "        ); \n"
   "    }; \n"
   "    Voting = {\n"
   "        attributeNames = (movieID, numberOfVotes, runningAverage); \n"
   "        rows = (\n"
   "            (102, 24, 4.789738), \n"
   "            (215, __NULL__, __NULL__)\n"
   "        ); \n"
   "    }; \n"
   "}"