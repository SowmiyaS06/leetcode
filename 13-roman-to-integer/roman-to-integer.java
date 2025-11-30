class Solution {
    public int romanToInt(String s) {
        int n = s.length();
        int tot = 0;

        for (int i = 0; i < n; i++) {
            char ch = s.charAt(i);

            switch (ch) {

                case 'I':
                    if (i < n - 1) {
                        char next = s.charAt(i + 1);
                        if (next == 'V') {
                            tot += 4;
                            i++; 
                            break;
                        }
                        if (next == 'X') {
                            tot += 9;
                            i++;
                            break;
                        }
                    }
                    tot += 1;
                    break;

                case 'V':
                    tot += 5;
                    break;

                case 'X':
                    if (i < n - 1) {
                        char next = s.charAt(i + 1);
                        if (next == 'L') {
                            tot += 40;
                            i++;
                            break;
                        }
                        if (next == 'C') {
                            tot += 90;
                            i++;
                            break;
                        }
                    }
                    tot += 10;
                    break;

                case 'L':
                    tot += 50;
                    break;

                case 'C':
                    if (i < n - 1) {
                        char next = s.charAt(i + 1);
                        if (next == 'D') {
                            tot += 400;
                            i++;
                            break;
                        }
                        if (next == 'M') {
                            tot += 900;
                            i++;
                            break;
                        }
                    }
                    tot += 100;
                    break;

                case 'D':
                    tot += 500;
                    break;

                case 'M':
                    tot += 1000;
                    break;
            }
        }

        return tot;
    }
}
