```mermaid
graph TD
    A["Solar Power"] --> B["Main Arduino"]
    A["Solar Power"] --> D["Moisture Sensor and Auxilary Arduino"]
    B["Main Arduino"] --> H["Relay"]
    B["Main Arduino"] --> C["Wifi"]
    C["Wifi"] --> E["API"]
    C["Wifi"] --> F["SMS"]
    C["Wifi"] --> G["School"]
    D["Moisture Sensor and Auxilary Arduino"] --> B["Main Arduino"]
```
![image](https://github.com/user-attachments/assets/d68c5a31-e9aa-4860-8424-8cb221ad2543)
