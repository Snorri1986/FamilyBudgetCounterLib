# v1/income/<double>
echo curl -v http://localhost:8080/v1/income/90.3
curl -v http://localhost:8080/v1/income/90.3
echo -------------------------------------------
echo curl -v http://localhost:8080/v1/income/0
curl -v http://localhost:8080/v1/income/0
echo ------------------------------------------
echo http://localhost:8080/v1/income/-11
curl -v http://localhost:8080/v1/income/-11
echo ------------------------------------------