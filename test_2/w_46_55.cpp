void w_46_55(int sum_arr[16], int sum_norm[16]) {

	for (int i = 0; i < 16; i++)
	{

		// ������ A
		if (i == 0) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 6)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 4; }
			else if (sum_arr[i] == 11) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 14) || (sum_arr[i] == 15)) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 16) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 17) || (sum_arr[i] == 18)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 19) || (sum_arr[i] == 20)) { sum_norm[i] = 10; }
		}
		// ������ B
		if (i == 1) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1)) { sum_norm[i] = 1; }
			else if (sum_arr[i] == 2) { sum_norm[i] = 2; }
			else if (sum_arr[i] == 3) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 4) { sum_norm[i] = 4; }
			else if (sum_arr[i] == 5) { sum_norm[i] = 5; }
			else if (sum_arr[i] == 6) { sum_norm[i] = 6; }
			else if (sum_arr[i] == 7) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 8) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 10; }
		}
		// ������ C
		if (i == 2) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3) || (sum_arr[i] == 4)) { sum_norm[i] = 1; }
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 6; }
			else if (sum_arr[i] == 15) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 20) || (sum_arr[i] == 21) || (sum_arr[i] == 22) || (sum_arr[i] == 23) || (sum_arr[i] == 24)
				|| (sum_arr[i] == 25) || (sum_arr[i] == 26)) {
				sum_norm[i] = 10;
			}
		}
		// ������ E
		if (i == 3) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2)) { sum_norm[i] = 1; }
			else if ((sum_arr[i] == 3) || (sum_arr[i] == 4)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 20) || (sum_arr[i] == 21) || (sum_arr[i] == 22) || (sum_arr[i] == 23) || (sum_arr[i] == 24)
				|| (sum_arr[i] == 25) || (sum_arr[i] == 26)) {
				sum_norm[i] = 10;
			}
		}
		// ������ F
		if (i == 4) {
			if (sum_arr[i] == 0){ sum_norm[i] = 1; }
			else if ((sum_arr[i] == 1) || (sum_arr[i] == 2)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 3) || (sum_arr[i] == 4)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 17) || (sum_arr[i] == 18) || (sum_arr[i] == 19) || (sum_arr[i] == 20) || (sum_arr[i] == 21) 
				|| (sum_arr[i] == 22) || (sum_arr[i] == 23)|| (sum_arr[i] == 24) || (sum_arr[i] == 25) 
				|| (sum_arr[i] == 26)) {sum_norm[i] = 10;}
		}
		// ������ G
		if (i == 5) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3) || (sum_arr[i] == 4)
				|| (sum_arr[i] == 5) || (sum_arr[i] == 6) || (sum_arr[i] == 7) || (sum_arr[i] == 8) || (sum_arr[i] == 9)) 
				{sum_norm[i] = 1;}
			else if (sum_arr[i] == 10) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 13) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 14) || (sum_arr[i] == 15)) { sum_norm[i] = 5; }
			else if (sum_arr[i] == 16) { sum_norm[i] = 6; }
			else if (sum_arr[i] == 17) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 18) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 19) { sum_norm[i] = 9; }
			else if (sum_arr[i] == 20) { sum_norm[i] = 10; }
		}
		// ������ H
		if (i == 6) {
			if (sum_arr[i] == 0) { sum_norm[i] = 1; }
			else if ((sum_arr[i] == 1) || (sum_arr[i] == 2)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 3) || (sum_arr[i] == 4)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12) || (sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19) || (sum_arr[i] == 20) || (sum_arr[i] == 21) || (sum_arr[i] == 22)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 23) || (sum_arr[i] == 24) || (sum_arr[i] == 25) || (sum_arr[i] == 26)) { sum_norm[i] = 10; }
		}
		// ������ I
		if (i == 7) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5) || (sum_arr[i] == 6)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 5; }
			else if (sum_arr[i] == 15) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 18) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 19) { sum_norm[i] = 9; }
			else if (sum_arr[i] == 20) { sum_norm[i] = 10; }
		}
		// ������ L
		if (i == 8) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4)) {sum_norm[i] = 1;}
			else if (sum_arr[i] == 5) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 6) || (sum_arr[i] == 7)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 8) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 5; }
			else if (sum_arr[i] == 11) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 14) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 17) || (sum_arr[i] == 18) || (sum_arr[i] == 19) || (sum_arr[i] == 20)) { sum_norm[i] = 10; }
		}
		// ������ M
		if (i == 9) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 9) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 14) || (sum_arr[i] == 15)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 18) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 19) || (sum_arr[i] == 20) || (sum_arr[i] == 21) ||
				(sum_arr[i] == 22) || (sum_arr[i] == 23) || (sum_arr[i] == 24)
				|| (sum_arr[i] == 25) || (sum_arr[i] == 26)) {sum_norm[i] = 10;}
		}
		// ������ N
		if (i == 10) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5) || (sum_arr[i] == 6)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 2; }
			else if (sum_arr[i] == 9) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11)) { sum_norm[i] = 4; }
			else if (sum_arr[i] == 12) { sum_norm[i] = 5; }
			else if (sum_arr[i] == 13) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 14) || (sum_arr[i] == 15)) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 16) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 17) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19) || (sum_arr[i] == 20)) { sum_norm[i] = 10; }
		}
		// ������ O
		if (i == 11) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 5) || (sum_arr[i] == 6)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 9) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 14) || (sum_arr[i] == 15)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19)) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 20) || (sum_arr[i] == 21) || (sum_arr[i] == 22) || (sum_arr[i] == 23)
				|| (sum_arr[i] == 24) || (sum_arr[i] == 25) || (sum_arr[i] == 26)) {
				sum_norm[i] = 10;
			}
		}
		// ������ Q1
		if (i == 12) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1)) { sum_norm[i] = 1; }
			else if (sum_arr[i] == 2) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 3) || (sum_arr[i] == 4)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 5) { sum_norm[i] = 4; }
			else if (sum_arr[i] == 6) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 9) || (sum_arr[i] == 10)) { sum_norm[i] = 7; }
			else if (sum_arr[i] == 11) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 12) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14) || (sum_arr[i] == 15) || (sum_arr[i] == 16) || (sum_arr[i] == 17) 
				|| (sum_arr[i] == 18)|| (sum_arr[i] == 19) || (sum_arr[i] == 20)) {sum_norm[i] = 10;}
		}
		// ������ Q2
		if (i == 13) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5)) {sum_norm[i] = 1;}
			else if (sum_arr[i] == 6) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 3; }
			else if (sum_arr[i] == 9) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 12) || (sum_arr[i] == 13)) { sum_norm[i] = 6; }
			else if (sum_arr[i] == 14) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16)) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 17) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 18) || (sum_arr[i] == 19) || (sum_arr[i] == 20)) { sum_norm[i] = 10; }
		}
		// ������ Q3
		if (i == 14) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5) || (sum_arr[i] == 6)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 7) || (sum_arr[i] == 8)) { sum_norm[i] = 2; }
			else if (sum_arr[i] == 9) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11)) { sum_norm[i] = 4; }
			else if (sum_arr[i] == 12) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 6; }
			else if (sum_arr[i] == 15) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 16) || (sum_arr[i] == 17)) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 18) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 19) || (sum_arr[i] == 20)) { sum_norm[i] = 10; }
		}
		// ������ Q4
		if (i == 15) {
			if ((sum_arr[i] == 0) || (sum_arr[i] == 1) || (sum_arr[i] == 2) || (sum_arr[i] == 3)
				|| (sum_arr[i] == 4) || (sum_arr[i] == 5)) {sum_norm[i] = 1;}
			else if ((sum_arr[i] == 6) || (sum_arr[i] == 7)) { sum_norm[i] = 2; }
			else if ((sum_arr[i] == 8) || (sum_arr[i] == 9)) { sum_norm[i] = 3; }
			else if ((sum_arr[i] == 10) || (sum_arr[i] == 11) || (sum_arr[i] == 12)) { sum_norm[i] = 4; }
			else if ((sum_arr[i] == 13) || (sum_arr[i] == 14)) { sum_norm[i] = 5; }
			else if ((sum_arr[i] == 15) || (sum_arr[i] == 16)) { sum_norm[i] = 6; }
			else if ((sum_arr[i] == 17) || (sum_arr[i] == 18)) { sum_norm[i] = 7; }
			else if ((sum_arr[i] == 19) || (sum_arr[i] == 20) || (sum_arr[i] == 21)) { sum_norm[i] = 8; }
			else if (sum_arr[i] == 22) { sum_norm[i] = 9; }
			else if ((sum_arr[i] == 23) || (sum_arr[i] == 24) || (sum_arr[i] == 25) || (sum_arr[i] == 26)) { sum_norm[i] = 10; }
		}
	}
}