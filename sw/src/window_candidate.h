int window_num = 305;
int w[305][2][2] = {
{{ 24 , 64 },{ 128 , 208 }},
{{ 24 , 64 },{ 168 , 248 }},
{{ 24 , 64 },{ 208 , 288 }},
{{ 24 , 64 },{ 248 , 328 }},
{{ 24 , 64 },{ 288 , 368 }},
{{ 24 , 64 },{ 328 , 408 }},
{{ 24 , 64 },{ 368 , 448 }},
{{ 24 , 64 },{ 408 , 488 }},
{{ 44 , 84 },{ 128 , 208 }},
{{ 44 , 84 },{ 168 , 248 }},
{{ 44 , 84 },{ 208 , 288 }},
{{ 44 , 84 },{ 248 , 328 }},
{{ 44 , 84 },{ 288 , 368 }},
{{ 44 , 84 },{ 328 , 408 }},
{{ 44 , 84 },{ 368 , 448 }},
{{ 44 , 84 },{ 408 , 488 }},
{{ 64 , 104 },{ 128 , 208 }},
{{ 64 , 104 },{ 168 , 248 }},
{{ 64 , 104 },{ 208 , 288 }},
{{ 64 , 104 },{ 248 , 328 }},
{{ 64 , 104 },{ 288 , 368 }},
{{ 64 , 104 },{ 328 , 408 }},
{{ 64 , 104 },{ 368 , 448 }},
{{ 64 , 104 },{ 408 , 488 }},
{{ 84 , 124 },{ 128 , 208 }},
{{ 84 , 124 },{ 168 , 248 }},
{{ 84 , 124 },{ 208 , 288 }},
{{ 84 , 124 },{ 248 , 328 }},
{{ 84 , 124 },{ 288 , 368 }},
{{ 84 , 124 },{ 328 , 408 }},
{{ 84 , 124 },{ 368 , 448 }},
{{ 84 , 124 },{ 408 , 488 }},
{{ 104 , 144 },{ 128 , 208 }},
{{ 104 , 144 },{ 168 , 248 }},
{{ 104 , 144 },{ 208 , 288 }},
{{ 104 , 144 },{ 248 , 328 }},
{{ 104 , 144 },{ 288 , 368 }},
{{ 104 , 144 },{ 328 , 408 }},
{{ 104 , 144 },{ 368 , 448 }},
{{ 104 , 144 },{ 408 , 488 }},
{{ 124 , 164 },{ 128 , 208 }},
{{ 124 , 164 },{ 168 , 248 }},
{{ 124 , 164 },{ 208 , 288 }},
{{ 124 , 164 },{ 248 , 328 }},
{{ 124 , 164 },{ 288 , 368 }},
{{ 124 , 164 },{ 328 , 408 }},
{{ 124 , 164 },{ 368 , 448 }},
{{ 124 , 164 },{ 408 , 488 }},
{{ 144 , 184 },{ 128 , 208 }},
{{ 144 , 184 },{ 168 , 248 }},
{{ 144 , 184 },{ 208 , 288 }},
{{ 144 , 184 },{ 248 , 328 }},
{{ 144 , 184 },{ 288 , 368 }},
{{ 144 , 184 },{ 328 , 408 }},
{{ 144 , 184 },{ 368 , 448 }},
{{ 144 , 184 },{ 408 , 488 }},
{{ 164 , 204 },{ 128 , 208 }},
{{ 164 , 204 },{ 168 , 248 }},
{{ 164 , 204 },{ 208 , 288 }},
{{ 164 , 204 },{ 248 , 328 }},
{{ 164 , 204 },{ 288 , 368 }},
{{ 164 , 204 },{ 328 , 408 }},
{{ 164 , 204 },{ 368 , 448 }},
{{ 164 , 204 },{ 408 , 488 }},
{{ 184 , 224 },{ 128 , 208 }},
{{ 184 , 224 },{ 168 , 248 }},
{{ 184 , 224 },{ 208 , 288 }},
{{ 184 , 224 },{ 248 , 328 }},
{{ 184 , 224 },{ 288 , 368 }},
{{ 184 , 224 },{ 328 , 408 }},
{{ 184 , 224 },{ 368 , 448 }},
{{ 184 , 224 },{ 408 , 488 }},
{{ 24 , 84 },{ 128 , 248 }},
{{ 24 , 84 },{ 158 , 278 }},
{{ 24 , 84 },{ 188 , 308 }},
{{ 24 , 84 },{ 218 , 338 }},
{{ 24 , 84 },{ 248 , 368 }},
{{ 24 , 84 },{ 278 , 398 }},
{{ 24 , 84 },{ 308 , 428 }},
{{ 24 , 84 },{ 338 , 458 }},
{{ 24 , 84 },{ 368 , 488 }},
{{ 24 , 84 },{ 398 , 518 }},
{{ 24 , 84 },{ 428 , 548 }},
{{ 39 , 99 },{ 128 , 248 }},
{{ 39 , 99 },{ 158 , 278 }},
{{ 39 , 99 },{ 188 , 308 }},
{{ 39 , 99 },{ 218 , 338 }},
{{ 39 , 99 },{ 248 , 368 }},
{{ 39 , 99 },{ 278 , 398 }},
{{ 39 , 99 },{ 308 , 428 }},
{{ 39 , 99 },{ 338 , 458 }},
{{ 39 , 99 },{ 368 , 488 }},
{{ 39 , 99 },{ 398 , 518 }},
{{ 39 , 99 },{ 428 , 548 }},
{{ 54 , 114 },{ 128 , 248 }},
{{ 54 , 114 },{ 158 , 278 }},
{{ 54 , 114 },{ 188 , 308 }},
{{ 54 , 114 },{ 218 , 338 }},
{{ 54 , 114 },{ 248 , 368 }},
{{ 54 , 114 },{ 278 , 398 }},
{{ 54 , 114 },{ 308 , 428 }},
{{ 54 , 114 },{ 338 , 458 }},
{{ 54 , 114 },{ 368 , 488 }},
{{ 54 , 114 },{ 398 , 518 }},
{{ 54 , 114 },{ 428 , 548 }},
{{ 69 , 129 },{ 128 , 248 }},
{{ 69 , 129 },{ 158 , 278 }},
{{ 69 , 129 },{ 188 , 308 }},
{{ 69 , 129 },{ 218 , 338 }},
{{ 69 , 129 },{ 248 , 368 }},
{{ 69 , 129 },{ 278 , 398 }},
{{ 69 , 129 },{ 308 , 428 }},
{{ 69 , 129 },{ 338 , 458 }},
{{ 69 , 129 },{ 368 , 488 }},
{{ 69 , 129 },{ 398 , 518 }},
{{ 69 , 129 },{ 428 , 548 }},
{{ 84 , 144 },{ 128 , 248 }},
{{ 84 , 144 },{ 158 , 278 }},
{{ 84 , 144 },{ 188 , 308 }},
{{ 84 , 144 },{ 218 , 338 }},
{{ 84 , 144 },{ 248 , 368 }},
{{ 84 , 144 },{ 278 , 398 }},
{{ 84 , 144 },{ 308 , 428 }},
{{ 84 , 144 },{ 338 , 458 }},
{{ 84 , 144 },{ 368 , 488 }},
{{ 84 , 144 },{ 398 , 518 }},
{{ 84 , 144 },{ 428 , 548 }},
{{ 99 , 159 },{ 128 , 248 }},
{{ 99 , 159 },{ 158 , 278 }},
{{ 99 , 159 },{ 188 , 308 }},
{{ 99 , 159 },{ 218 , 338 }},
{{ 99 , 159 },{ 248 , 368 }},
{{ 99 , 159 },{ 278 , 398 }},
{{ 99 , 159 },{ 308 , 428 }},
{{ 99 , 159 },{ 338 , 458 }},
{{ 99 , 159 },{ 368 , 488 }},
{{ 99 , 159 },{ 398 , 518 }},
{{ 99 , 159 },{ 428 , 548 }},
{{ 114 , 174 },{ 128 , 248 }},
{{ 114 , 174 },{ 158 , 278 }},
{{ 114 , 174 },{ 188 , 308 }},
{{ 114 , 174 },{ 218 , 338 }},
{{ 114 , 174 },{ 248 , 368 }},
{{ 114 , 174 },{ 278 , 398 }},
{{ 114 , 174 },{ 308 , 428 }},
{{ 114 , 174 },{ 338 , 458 }},
{{ 114 , 174 },{ 368 , 488 }},
{{ 114 , 174 },{ 398 , 518 }},
{{ 114 , 174 },{ 428 , 548 }},
{{ 129 , 189 },{ 128 , 248 }},
{{ 129 , 189 },{ 158 , 278 }},
{{ 129 , 189 },{ 188 , 308 }},
{{ 129 , 189 },{ 218 , 338 }},
{{ 129 , 189 },{ 248 , 368 }},
{{ 129 , 189 },{ 278 , 398 }},
{{ 129 , 189 },{ 308 , 428 }},
{{ 129 , 189 },{ 338 , 458 }},
{{ 129 , 189 },{ 368 , 488 }},
{{ 129 , 189 },{ 398 , 518 }},
{{ 129 , 189 },{ 428 , 548 }},
{{ 144 , 204 },{ 128 , 248 }},
{{ 144 , 204 },{ 158 , 278 }},
{{ 144 , 204 },{ 188 , 308 }},
{{ 144 , 204 },{ 218 , 338 }},
{{ 144 , 204 },{ 248 , 368 }},
{{ 144 , 204 },{ 278 , 398 }},
{{ 144 , 204 },{ 308 , 428 }},
{{ 144 , 204 },{ 338 , 458 }},
{{ 144 , 204 },{ 368 , 488 }},
{{ 144 , 204 },{ 398 , 518 }},
{{ 144 , 204 },{ 428 , 548 }},
{{ 159 , 219 },{ 128 , 248 }},
{{ 159 , 219 },{ 158 , 278 }},
{{ 159 , 219 },{ 188 , 308 }},
{{ 159 , 219 },{ 218 , 338 }},
{{ 159 , 219 },{ 248 , 368 }},
{{ 159 , 219 },{ 278 , 398 }},
{{ 159 , 219 },{ 308 , 428 }},
{{ 159 , 219 },{ 338 , 458 }},
{{ 159 , 219 },{ 368 , 488 }},
{{ 159 , 219 },{ 398 , 518 }},
{{ 159 , 219 },{ 428 , 548 }},
{{ 174 , 234 },{ 128 , 248 }},
{{ 174 , 234 },{ 158 , 278 }},
{{ 174 , 234 },{ 188 , 308 }},
{{ 174 , 234 },{ 218 , 338 }},
{{ 174 , 234 },{ 248 , 368 }},
{{ 174 , 234 },{ 278 , 398 }},
{{ 174 , 234 },{ 308 , 428 }},
{{ 174 , 234 },{ 338 , 458 }},
{{ 174 , 234 },{ 368 , 488 }},
{{ 174 , 234 },{ 398 , 518 }},
{{ 174 , 234 },{ 428 , 548 }},
{{ 189 , 249 },{ 128 , 248 }},
{{ 189 , 249 },{ 158 , 278 }},
{{ 189 , 249 },{ 188 , 308 }},
{{ 189 , 249 },{ 218 , 338 }},
{{ 189 , 249 },{ 248 , 368 }},
{{ 189 , 249 },{ 278 , 398 }},
{{ 189 , 249 },{ 308 , 428 }},
{{ 189 , 249 },{ 338 , 458 }},
{{ 189 , 249 },{ 368 , 488 }},
{{ 189 , 249 },{ 398 , 518 }},
{{ 189 , 249 },{ 428 , 548 }},
{{ 204 , 264 },{ 128 , 248 }},
{{ 204 , 264 },{ 158 , 278 }},
{{ 204 , 264 },{ 188 , 308 }},
{{ 204 , 264 },{ 218 , 338 }},
{{ 204 , 264 },{ 248 , 368 }},
{{ 204 , 264 },{ 278 , 398 }},
{{ 204 , 264 },{ 308 , 428 }},
{{ 204 , 264 },{ 338 , 458 }},
{{ 204 , 264 },{ 368 , 488 }},
{{ 204 , 264 },{ 398 , 518 }},
{{ 204 , 264 },{ 428 , 548 }},
{{ 24 , 104 },{ 128 , 288 }},
{{ 24 , 104 },{ 168 , 328 }},
{{ 24 , 104 },{ 208 , 368 }},
{{ 24 , 104 },{ 248 , 408 }},
{{ 24 , 104 },{ 288 , 448 }},
{{ 24 , 104 },{ 328 , 488 }},
{{ 24 , 104 },{ 368 , 528 }},
{{ 24 , 104 },{ 408 , 568 }},
{{ 44 , 124 },{ 128 , 288 }},
{{ 44 , 124 },{ 168 , 328 }},
{{ 44 , 124 },{ 208 , 368 }},
{{ 44 , 124 },{ 248 , 408 }},
{{ 44 , 124 },{ 288 , 448 }},
{{ 44 , 124 },{ 328 , 488 }},
{{ 44 , 124 },{ 368 , 528 }},
{{ 44 , 124 },{ 408 , 568 }},
{{ 64 , 144 },{ 128 , 288 }},
{{ 64 , 144 },{ 168 , 328 }},
{{ 64 , 144 },{ 208 , 368 }},
{{ 64 , 144 },{ 248 , 408 }},
{{ 64 , 144 },{ 288 , 448 }},
{{ 64 , 144 },{ 328 , 488 }},
{{ 64 , 144 },{ 368 , 528 }},
{{ 64 , 144 },{ 408 , 568 }},
{{ 84 , 164 },{ 128 , 288 }},
{{ 84 , 164 },{ 168 , 328 }},
{{ 84 , 164 },{ 208 , 368 }},
{{ 84 , 164 },{ 248 , 408 }},
{{ 84 , 164 },{ 288 , 448 }},
{{ 84 , 164 },{ 328 , 488 }},
{{ 84 , 164 },{ 368 , 528 }},
{{ 84 , 164 },{ 408 , 568 }},
{{ 104 , 184 },{ 128 , 288 }},
{{ 104 , 184 },{ 168 , 328 }},
{{ 104 , 184 },{ 208 , 368 }},
{{ 104 , 184 },{ 248 , 408 }},
{{ 104 , 184 },{ 288 , 448 }},
{{ 104 , 184 },{ 328 , 488 }},
{{ 104 , 184 },{ 368 , 528 }},
{{ 104 , 184 },{ 408 , 568 }},
{{ 124 , 204 },{ 128 , 288 }},
{{ 124 , 204 },{ 168 , 328 }},
{{ 124 , 204 },{ 208 , 368 }},
{{ 124 , 204 },{ 248 , 408 }},
{{ 124 , 204 },{ 288 , 448 }},
{{ 124 , 204 },{ 328 , 488 }},
{{ 124 , 204 },{ 368 , 528 }},
{{ 124 , 204 },{ 408 , 568 }},
{{ 144 , 224 },{ 128 , 288 }},
{{ 144 , 224 },{ 168 , 328 }},
{{ 144 , 224 },{ 208 , 368 }},
{{ 144 , 224 },{ 248 , 408 }},
{{ 144 , 224 },{ 288 , 448 }},
{{ 144 , 224 },{ 328 , 488 }},
{{ 144 , 224 },{ 368 , 528 }},
{{ 144 , 224 },{ 408 , 568 }},
{{ 164 , 244 },{ 128 , 288 }},
{{ 164 , 244 },{ 168 , 328 }},
{{ 164 , 244 },{ 208 , 368 }},
{{ 164 , 244 },{ 248 , 408 }},
{{ 164 , 244 },{ 288 , 448 }},
{{ 164 , 244 },{ 328 , 488 }},
{{ 164 , 244 },{ 368 , 528 }},
{{ 164 , 244 },{ 408 , 568 }},
{{ 184 , 264 },{ 128 , 288 }},
{{ 184 , 264 },{ 168 , 328 }},
{{ 184 , 264 },{ 208 , 368 }},
{{ 184 , 264 },{ 248 , 408 }},
{{ 184 , 264 },{ 288 , 448 }},
{{ 184 , 264 },{ 328 , 488 }},
{{ 184 , 264 },{ 368 , 528 }},
{{ 184 , 264 },{ 408 , 568 }},
{{ 24 , 124 },{ 128 , 328 }},
{{ 24 , 124 },{ 178 , 378 }},
{{ 24 , 124 },{ 228 , 428 }},
{{ 24 , 124 },{ 278 , 478 }},
{{ 24 , 124 },{ 328 , 528 }},
{{ 24 , 124 },{ 378 , 578 }},
{{ 74 , 174 },{ 128 , 328 }},
{{ 74 , 174 },{ 178 , 378 }},
{{ 74 , 174 },{ 228 , 428 }},
{{ 74 , 174 },{ 278 , 478 }},
{{ 74 , 174 },{ 328 , 528 }},
{{ 74 , 174 },{ 378 , 578 }},
{{ 124 , 224 },{ 128 , 328 }},
{{ 124 , 224 },{ 178 , 378 }},
{{ 124 , 224 },{ 228 , 428 }},
{{ 124 , 224 },{ 278 , 478 }},
{{ 124 , 224 },{ 328 , 528 }},
{{ 124 , 224 },{ 378 , 578 }},
};
