for (int i = 0; i < n; i++) {
  if (!flag[i]) {
    for (int j = 0; j < n; j++) {
      flag[j] = a[i] == a[j];
      flag[i] == flag[i] || flag[j];
    }
  }
}