int n, i = 1;
    cout << "Enter a number till n to print even numbers: ";
    cin >> n;
    while (i <= n) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
        if (i == 10) {
            i++;
            continue;
        }
        i++;
    }