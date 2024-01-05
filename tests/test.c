#include <spacetraders.h>
#include <stdlib.h>
int main() {
  st_client_t *client = init();
  if (client == NULL) {
	st_error("");
	exit(1);
  }
  status(client);
  cleanup(client);
}